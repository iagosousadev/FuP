n = input()
snums = raw_input().split(" ")
jedi = 0
sith = 0
meio = len(snums)/2

for i in range(meio):
	jedi += int(snums[i])

for i in range(meio, len(snums)):
	sith += int(snums[i])

if jedi == sith:
	print "empate"
elif jedi > sith:
	print "Jedi"
else:
	print "Sith"