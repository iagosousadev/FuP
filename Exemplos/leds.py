testes = input()
leds = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

while testes > 0:
	num = raw_input()
	soma = 0
	for x in num:
		soma += leds[int(x)]
	print soma, "leds"
	testes -= 1