# Autor: Iago Sousa

def contagem(n, vet):
	count = 0
	for x in vet:
		if x == n:
			count+=1
	return count

tam = input()
vetor = raw_input().split(" ")
inteiros = []

for i in vetor:
	inteiros.append(int(i))

valor = inteiros[0]
mais = contagem(valor, inteiros)


for i in range(len(inteiros)):
	atual = contagem(inteiros[i], inteiros)
	if atual > mais:
		mais = atual
		valor = inteiros[i]

print valor