#Entferne """ um codes nutzbar zu machen.

"""#Gibt der nutzer hier 5 ein, wird print erzeugt. Gibt er was anderes ein, kommt nichts.
a = eval(input("Gib die Zahl 5 ein: "))
if a == 5:#Hier ist auch ein "not" möglich.
    print("Bingo!")

#Das wird hiermit geändert. Hier werden für größer/kleiner, ein eigener print erzeugt.
if a > 5:#Ist a größer als 5? Dann print!
    print("Falsche Eingabe!")
if a < 5:#Ist a kleiner als 5? dann print!
    print("Falsche Eingabe!")"""

"""#Da drei verschiedene if abfragen zu aufwendig sind, werden sie durch != ersetzt. 
#Es vergleicht die werte auf ungleichheit.
a = eval(input("Gib die Zahl 5 ein: "))
if a == 5:
    print("Bingo!")
if a != 5:#Hier wird != genutzt um zu vergleichen.Das Programm läuft vollkommen Identisch zum ersten. Nur kürzer.
    print("Falsche Eingabe!")"""


"""#Dieser Code überprüft ob die Eingabe "Wahr" ist.
#↓Bezug zu Line 27: ändere A in B
a = True #True wird warum auch immer groß geschrieben. "true" funktioniert nicht.
if a:
    print("Der Wert war True!")
#Es geht auch umgekehrt. Ein "not" kann beigefügt werden.
if not a:
    print("Dieser Wert war False bro!")"""


"""#Es gehen aber auch mehrere If Bedingungen.
a = eval(input("Gib die Zahl 5 ein: "))
b = eval(input("Gib die Zahl 10 ein: "))#Hier wurde b hinzugefügt.
if a == 5 and b == 10:
    print("Bingo!")
if not (a == 5 and b == 10):#Das einfache = ist eine zuweisung. == hingegen ein istgleich
#Es ist wichtig die Bedingung zu "not" in Klammern zu setzen da ssont nur der erste Teil nach dem "not" Zählt.
    print("Falsche Eingabe!")
#Hier müssen beide Zahlen richtig eingeben werden, sonst erscheint "Falsche Eingabe!" """

"""#Es gibt neben der "not" auch noch eine "or" funktion. Diese führt dazu, dass die Bedingung auch erfüllt ist wenn
#nur eine der beiden Zahlen richtig eingegeben wurde.
a = eval(input("Gib die Zahl 5 ein: "))
b = eval(input("Gib die Zahl 10 ein: "))
if a == 5 or b == 10:#Hier ist das "or" eingefügt.
    print("Bingo! Mindestens eine Zahl wurde richtig eingegeben!")
if not (a == 5 or b == 10):#Ist keine der beiden Zahlen eingegeben worden, erscheint meine Fehlermeldung.
    print("Falsche Eingabe!")
#"and" (Z.33-41) und "or" können beliebig oft kombiniert werden."""


"""#Es gibt auch noch "else" welches ausgeführt wird, wenn die "if" Bedingung nicht erfüllt ist.
a = eval(input("Gib die Zahl 5 ein: "))
if a == 5:
    print("Bingo!")
else:#Trifft die If funktion nicht zu, wird ↓ asugeführt.
    print("Falsche Eingabe!")"""


"""#"elif" wird dazu genutzt um weitere optionale Bedingungen hinzuzufügen.
#Wenn "if" Bedingung 1 ist, kann "elif" Bedingung 2 sein. Ist bedingung 1 nicht erfüllt, wird Bedinung 2 ausgeführt.
#Trifft keine Bedingung zu, wird eben wieder das "else" ausgeführt.
#Ein Anwendungsbeispiel ist die Kontrolle von Warenbestand. Der Händler gibt die Zahl ein und ein Ergebnis kommt.
a = eval(input("Geben Sie den Warenbestand ein: "))
if a >= 10 and a < 100:#ist a hierbei: Größer oder gleich 10 oder unter 100
    print("Der Warenbestand beträgt", a, "Artikel.")#a ist hierbei die Zahl. Merke, alles wird durch Komma getrennt.
elif a >= 100:#ist a hier gleich oder mehr als 100
    print("Warnung! Lager Voll!")
elif a > 0:#Bestand ist unter 10 aber über 0
    print("Nur noch", a, "Artikel im Lager. Nachbestellen!")
elif a == 0:#Wenn Bestand gleich 0, also nichts mehr da ist
    print("Lager Leer!")
else:#Wenn der Nutzer eine ungültige angabe macht bspw -1 tritt else in kraft.
    print("Ungültige Eingabe!")"""


"""#Erste Aufgabe:
auto1 = ["VW", "Polo", "Neu", "Grau"]
auto2 = ["Renault", "Clio", "Gebraucht", "Grau"]
auto3 = ["Mercedes", "A-Klasse", "Gebraucht", "Schwarz"]
a = eval(input("Wie viel Geld hast du?"))
if a < 5000:
    print("Sorry, heute leider kein Auto für dich!")
elif a >= 5000 and a < 10000:
    print("Ich kann dir folgendes Auto empfehlen: ")
    print(auto2)
elif a == 10000 or a > 10000 and a < 20000:
    print("Ich kann dir folgende Autos empfehlen: ")
    print(auto3,auto2)
else:
    print("Ich kann dir folgende Autos empfehlen: ")
    print(auto3,auto1,auto2)
#ERSTER KOMPLETT EIGENER CODE YAAAAAAAAAY!!!!!!!"""

"""#Zweite Aufgabe:
print("Idioten Test, löse 5 Aufgaben!")
p = 0
e = eval(input("2+2= "))
if e == 4:
    p = p + 1

e2 = eval(input("1+1= "))
if e2 == 2:
    p = p + 1

e3 = eval(input("68 + 1= "))
if e3 == 69:
    p = p + 1

e4 = eval(input("70 + 30= "))
if e4 == 100: 
    p = p + 1

e5 = eval(input("8 x 8= "))
if e5 == 64:
    p = p + 1

print("Test Beendet.")
print(" Werte Ergebnisse aus...")
if p == 0:
    print("Du hast 0 Punkte. Du bist in Mathe genau so gut wie ich!")
elif p == 1:
    print("Na wenigstens eine Sache hast du richtig..")
elif p == 2:
    print("Ayy 2 Punkte, immerhin!")
elif p == 3:
    print("Gang Junge. 3 Richtig.")
elif p == 4:
    print("4 Richtig. So knapp!")
elif p == 5:
    print("Alles richtig! Mathe LK!")"""