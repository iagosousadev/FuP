frase = raw_input()
car = raw_input()
cont = 0
for x in frase:
	if x.lower() == car:
		cont+=1
print cont