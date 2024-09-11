#Sorgt dafür das etwas eingegeben wird
playback = str(input("Gebe etwas ein: "))
#Sorgt dafür das die Wörter in eine Liste unterteilt werden.
playback_list = playback.split()
#Sorgt dafür dass eine modifizierte eingabe dem ursprünglichen Wort + ... zusammengesetzt wird.
playback_mod = ""
#Beginnt eine Schleife die jedes Wort in der Liste durchläöuft. Schleife wird so oft durchlaufen wie es Wörter in der Liste gibt.
for i in range(len(playback_list)):
#Überprüft ob das aktuelle Wort das letzte in der Liste ist. Wenn = ohne ... / Wenn nicht: mit ... - ajn playback_mod
    if i == len(playback_list)-1:
        playback_mod = playback_mod + playback_list[i]
    else:
        playback_mod = playback_mod + playback_list[i] + "..."
#Gibt aus.
print(playback_mod)