#Frage den Benutzer nach seinem Namen, schreibe den Namen Groß
name = input("Was ist dein Name?: ").strip().title()

#Splitte den Namen des Nutzers in Vor- und Nachname
first, last = name.split(" ")

#Sag Hallo zum Benutzer!
print(f"Hallo, {first}")