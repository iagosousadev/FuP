import time
def busca_binaria(vetor, inicio, fim, elem):
	if inicio > fim:
		return -1
	meio = (inicio + fim) / 2

	if vetor[meio] == elem:
		return meio
	if vetor[meio] > elem:
		return busca_binaria(vetor, inicio, meio-1, elem)
	if vetor[meio] < elem:
		return busca_binaria(vetor, meio+1, fim, elem)

def busca_linear(vetor, elem):
	for x in range(len(vetor)):
		if vetor[x] == elem:
			return x
	return -1


lista = [x for x in range(0, 10001) if x % 2 == 0]


num = input("Digite o numero: ")
inicio = time.time()
indice =  busca_binaria(lista, 0, len(lista)-1, num)
fim = time.time()
tempo = float(fim-inicio)
print "tempo busca binaria = %.20f" % tempo
print "Indice = %d\nNumero = %d" % (indice, lista[indice])

inicio2 = time.time()
print busca_linear(lista, num)
fim2 = time.time()
tempo2 = float(fim2-inicio2)

print "tempo busca linear = %.20f" % tempo2
