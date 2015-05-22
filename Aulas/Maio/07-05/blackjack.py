scartas = raw_input().split(" ")
cartas = []
pontos = 0
ases = 0

for i in scartas:
    cartas.append(int(i))

for x in range(1, cartas[0]+1):
    if cartas[x] == 1:
        pontos += 11
        ases += 1
    elif cartas[x] > 10:
        pontos += 10
    else:
        pontos += cartas[x]

while ases > 0 and pontos > 21:
    pontos -= 10
    ases -= 1

print pontos