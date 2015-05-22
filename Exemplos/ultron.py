chave = raw_input()
palavra = raw_input()

chave = chave.lower()
palavra = palavra.lower()

cont = 0
for letra in palavra:
	if letra in chave:
		cont += 1

print cont
if cont == len(palavra):
	print "chefe"
elif len(palavra)/2 <= cont:
	print "ultron"
else:
	print "pessoa"
