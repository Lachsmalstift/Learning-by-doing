#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <string.h>

#define PORT 5000
#define RCVBUFSIZE 1024

int main()
{
    //windows version
    SOCKET client_sock = INVALID_SOCKET;
    int n = 0;
    char recvBuff[RCVBUFSIZE];
    struct sockaddr_in serv_addr;

    //initialiseren winswock
    WORD wVersionRequested = MAKEWORD (1,1);
    WSADATA wsaData;
    if (WSAStartup (wVersionRequested, &wsaData) !=0)
        printf("Fehler beim Initalisieren von Winsock");
    else 
        printf("Alles tutti beim initialisieren!");

    //erzeugen des sockets
    if((client_sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\nError: could not create socket. \n");
        return 1;
    }
    else printf("Client socket created.\n");

    //addressdaten erstellen
    //ipv4 Verbindung
    serv_addr.sin_family = AF_INET;
    //Port
    serv_addr.sin_port = htons(PORT);
    //ip adresse localhost
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    //verbndung clientsock mit server anfragen
    if (connect(client_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
        return 0;


    // Send a message to the server
    char *msg = "Hallo lieber Server!";
    if (send(client_sock, msg, (int)strlen(msg), 0) == -1)
    {
        printf("\nError: could not send message.\n");
    }
    else
    {
        printf("\nMessage sent: %s\n", msg);
    }

    // Receive a response from the server
    int bytesReceived = recv(client_sock, recvBuff, RCVBUFSIZE - 1, 0);
    if (bytesReceived > 0)
    {
        recvBuff[bytesReceived] = '\0'; 
        printf("Received message: %s\n", recvBuff);
    }
    else
    {
        printf("No message received or an error occurred.\n");
    }

    // Clean up resources (COPILOT ANTWORT)
    closesocket(client_sock);
    WSACleanup();

    system("pause"); 
    return 0;
}