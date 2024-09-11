a = int(input("Wie viele Yuan hast du noch?"))
b = int (input("Wie viele Yen hast du noch?"))
c = int (input("Wie viele Won hast du noch?"))
#Exchange Raten vom 19.01.2023 19:28
total = ((a * 0.14) + (b * 0.0072) + (c * 0.00075))
print("Die insgesamt umgerechnete Summe beträgt",total,"Euro")