print('Spaßkasse')

pin = int(input("Gebe deine Pin ein:"))

while pin != 1234:
  pin = int(input('Falsche PIN. Neuer Versuch: '))

  if pin == 1234:
    print('PIN akzeptiert!')