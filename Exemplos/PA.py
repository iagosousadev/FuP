import time

soma = 0
lista = range(1,1000000)
time1 = time.time()
for x in lista:
	soma+=x
time2 = time.time()
times = time2 - time1
print "soma normal: ", soma
print "%.20f" % times

time3 = time.time()
PA = ((lista[0] + lista[len(lista)-1]) * len(lista)/2)
time4 = time.time()
times2 = time4 - time3
print "Formula da PA: ", PA
print "%.20f" % times2
