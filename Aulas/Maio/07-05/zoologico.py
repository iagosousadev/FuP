sanimais = raw_input().split(" ")
animais = []

for x in sanimais:
	if x not in animais:
		animais.append(x)

for x in animais:
	print x,