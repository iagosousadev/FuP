import random
print "1 - pedra 2 - papel 3 - tesoura"
turnos = 5
jogador = 0
pc = 0

while turnos > 0:
	jog = input("Digite a sua opcao: ")
	comp = random.randint(1,3)

	if jog == comp:
		print "Empate!!!"
	elif (jog == 1 and comp == 3) or (jog == 3 and comp == 2) or (jog == 2 and comp == 1):
		print "Vc ganhou!!!"
		jogador += 1
	else:
		print "Computador ganhou!!!"
		pc += 1
	turnos -= 1

if jogador == pc:
	print "O jogo empatou!"
elif jogador > pc:
	print "Voce ganhou a melhor de 5 com %d pontos" % jogador
else:
	print "Computador ganhou a melhor de 5 com %d pontos" % pc