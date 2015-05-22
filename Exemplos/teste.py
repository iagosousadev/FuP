A = input()
B = input()
soma = 0

for x in range(A, B+1):
    if x % 2 == 0:
        soma += x
print soma
