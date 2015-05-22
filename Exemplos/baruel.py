tam = input()
valores = raw_input().split(" ")
inteiros = []

for x in valores:
	inteiros.append(int(x))

for i in range(len(inteiros) - 1):
	if inteiros[i] == inteiros[i+1]:
		print inteiros[i],

print ""

for j in range(len(inteiros) - 1):
	if ((inteiros[j] + 1) != inteiros[j + 1]) and inteiros[j] != inteiros[j+1]:
		print inteiros[j] + 1,
