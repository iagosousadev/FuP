frase = raw_input()
vogais = "aeiou"
vog = ""
cons = ""

for x in frase:
    if x == " ":
        pass
    elif x in vogais:
        vog += x
    else:
        cons += x
print vog
print cons