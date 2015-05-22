frase = raw_input()
invertida = ""

for x in frase:
	if x == x.lower():
		invertida += x.upper()
	else:
		invertida += x.lower()
print invertida
