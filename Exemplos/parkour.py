n = input()
nums = raw_input().split(" ")
pulos = []

for x in nums:
	pulos.append(int(x))

parkour = 0
for i in range(len(pulos) - 1):
	teste = (pulos[i] - pulos[i+1])
	if teste == 2 or teste == -2:
		parkour+=1

print parkour