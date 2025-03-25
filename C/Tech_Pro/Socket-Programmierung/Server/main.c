#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <windows.h>  // Added for Sleep()
#include <string.h>

//Portnummer
#define PORT 5000
//Puffer für ausgehende Nachrichten
#define SENDBUFSIZE 1025
int send_another_message();

int main()
{
    /* Deklaration der Variablen vom Typ SOCKET - Repräsentieren die Verbindungen */
    SOCKET listen_sock, conn_sock;

    /* Variablen vom Typ struct sockaddr_in - enthalten Adressinformationen */
    struct sockaddr_in serv_addr, client_addr;

    /* Puffer zum Senden von Daten */
    char sendBuff[SENDBUFSIZE];
    int msg =1;
    /* Initialisierung von Winsock - Windows-spezifische Einstellungen */
    WORD wVersionRequested = MAKEWORD(1, 1);
    WSADATA wsaData;
    if (WSAStartup(wVersionRequested, &wsaData) != 0)
        printf("Fehler beim Initalisieren von Winsock");
    else 
        printf("Alles tutti beim initialisieren!\n");

    /* Erzeugen des Sockets */
    if ((listen_sock = socket(AF_INET, SOCK_STREAM, 0)) > 0) // prüft, ob Rückgabewert von socket positiv
        printf("socket retrieve success\n");
    else
    {
        printf("Error while retrieving socket\n");
        // eventuell Auswerten des Fehlercodes
        // beenden des Serverprozesses
        return 0;
    }
    // erster Test: Erzeugen des Sockets
    // closesocket(listen_sock);

    // Initialisieren des Speicherbereichs mittels memset
    memset(&serv_addr, '0', sizeof(serv_addr));
    memset(sendBuff, '\0', sizeof(sendBuff)); // '\0' ist das Terminierungszeichen für Strings

    // Serveradresse wird mit Werten belegt
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(PORT);

    // Binden der Adressdaten an den listen_sock
    bind(listen_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

    // Auf Verbindungsanfragen warten
    if (listen(listen_sock, 10) == -1)
    {
        printf("Failed to listen\n");
        return -1;
    }
    else 
        printf("Listening...\n");

    // zweiter Test: Warten auf Verbindungen
    // closesocket(listen_sock);

    while (1)
    {
        // Akzeptieren einer Client-Verbindung
        if ((conn_sock = accept(listen_sock, (struct sockaddr*)&client_addr, NULL)) != INVALID_SOCKET)
        {
            printf("Connection accepted!\n"); // Akzeptieren der Request
            printf("Processing client with address %s\n", inet_ntoa(client_addr.sin_addr));
            do{
                // Nachricht an den Client schicken
                strcpy(sendBuff, "Hallo :)"); // Nachricht auf den send Buffer kopiert
                // Senden an den Client
                send(conn_sock, sendBuff, strlen(sendBuff), 0);
            } while(send_another_message());
        }




        // Beenden der Verbindung
        closesocket(conn_sock);
        Sleep(100); // Sleep takes milliseconds (100ms)
    }
    return 0;
}

//interaktive nutzer abfrage
int send_another_message()
{
    char user_input;
    int done = 0;
    printf("Weitere Nachricht verschicken (y/n)?\n");
    do{
        scanf("%c", &user_input);
        fflush;
        if(user_input != 'y' && user_input != 'n') printf("Ungueltige Eingabe!\n");
        else done = 1;
    } while(!done);
    if (user_input == 'y') return 1;
    else return 0;
}