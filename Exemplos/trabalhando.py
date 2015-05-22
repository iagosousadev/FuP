dia = input()
hr = input()
mi = input()

if dia == 1:
	print "NAO"
elif dia == 7:
	if (8 <= hr <= 11) and (0 <= mi <= 59):
		print "SIM"
	else:
		print "NAO"
elif (2 <= dia <= 6):
	if (8 <= hr and hr <= 11) or (14 <= hr and hr <= 17) and \
		(0 <= mi and mi <= 59):
		print "SIM"
else:
	print "Dia Invalido"