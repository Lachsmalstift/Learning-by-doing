ph = int(input("Gib einen PH Wert ein (0-14):"))

if ph > 7:
    print("Vorsicht, basisch!")

elif ph < 7:
    print("Vorsicht, sauer!")

else:
    print("Neutral!")