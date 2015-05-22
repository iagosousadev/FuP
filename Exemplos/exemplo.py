x = input()
n = input()
aux = x
res = 0

for i in range(n-1):
    for j in range(x):
        res+=aux
    aux = res
    res = 0

print aux
