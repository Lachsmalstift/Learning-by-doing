#WHILE SCHLEIFEN
"""#while Bedingung: Befehle werden ausgeführt, solange die Bedingung zutrifft
n = 1 
while n <= 100:
    print (n)
    n = n + 0.01
#So lange n kleiner als 100 ist, wird immer 1 addiert."""

"""w = "ja" #w = weiter
while w == "ja":#w wird so lange ausgeführt wie ja eingegeben wird
    z = eval(input("Welche Zahl willst du verdoppeln?"))
    print("Der doppelte Wert ist: ", z * 2)
    w = input ("Möchtest du noch was verdoppeln?")"""

#FOR SCHLEIFEN MIT DIC
"""dic = {"Marke":"Volkswagen","Modell":"Golf","Baujahr":"2011","Preis":5000}#Hier ein Dic mit Inhalt
for inhalt in dic:#Hier wird wieder der Name inhalt vergeben
    print(inhalt, dic[inhalt])#Es wird erst die Bezeichnung, dann die Namen ausgeben - daher als zweites dic"""

#FOR SCHLEIFEN
"""l = [3, 6, 123, 54, 927]#Das sind die Inhjalte einer Liste
for inhalt in l:#Inhalt, ist hierbei ein frei gewählter Name welcher die Liste in l beschreibt
    print (inhalt)#Hier wird nun angegeben dass der "inhalt" geprinted werden soll"""

"""l = [3, 6, 123, 54, 927]
print(l)
for inhalt in enumerate(l):#enumerate macht hier was, was genau weiss ich gerade auch nicht so genau
    l[inhalt[0]] = inhalt[1] * 2
print(l)"""

#Schnellere Version der while schleife (Zeile: 3-7)
#+1 deswegen, da wir ja gelernt haben, dass range die letzte zahl der range nicht ausgibt. (0-99)
#um jetzt aber eine Range auszugeben die wie im Beispiel genannt wirklich von 0-100 geht, müsste man
#die zahlen eben definieren Beispiel: range (1, 101)
#Auch ein Dritter Wert ist möglich (1,101,->2<-) dieser bestimmt dann die Schrittzahl. In diesem Beispiel jede zweite.
#!!WICHTIG!! ZWEITE ZAHL MUSS GRÖßER SEIN ALS ERSTE SONST GIBTS NEN FEHLER
"""for n in range(100):
    print(n+1)"""

"""l = [12, 18, 3, 6, 46, 234, 23]#Hier wieder eine Liste
w = eval(input("Welcher Wert soll gesucht werden? "))#Programm fragt welcher Wert gesucht werden soll
for n in l:#Hier wird n in l definiert. Also nummer in Liste
    if n == w:#entspricht n dem eingegeben wert(w)
        print("Der Wert wurde gefunden.")
        break#wird die schleife unterbrochen und ein ergebnis ausgegeben
    print(n)
else:#else ist dafür da, dass wenn der eingegebene wert nicht gefunden wird ein anderer befehl ausgeführt wird.
    print("Der Wert wurde nicht gefunden.")"""


#ÜBUNGSAUFGABE
#1 Quadratzahlen
"""l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for n in l:
    print(n*n)"""

staedte = ["Berlin", "Hamburg", "Köln", "Stuttgart", "Düsseldorf","Frankfurt", "München", "Bremen", "Hannover", "Dresden"]
i = 0
while i < 10:
    print(staedte[i])
    i += 1 