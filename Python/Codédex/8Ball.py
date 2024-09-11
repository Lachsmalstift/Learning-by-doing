#Der allwissende Schüttelball
import random
#Gebe eine Frage ein
frage = input("Stelle eine Frage:")
random_number = random.randint(1, 6)
if random_number == 1:
    answer = "Ja, auf jeden Fall."
elif random_number == 2:
    answer = "Es kommt drauf an."
elif random_number == 3:
    answer = "Mal schauen."
elif random_number == 4:
    answer = "Frag mich in ner Stunde nochmal."
elif random_number == 5:
    answer = "Das willst du lieber nicht wissen."
elif random_number == 6:
    answer = "Nö"
else:
    answer = "Fehler"

print("Stelle eine Frage: " +frage)
print("Der Allwissende Schüttelball sagt:" +answer)