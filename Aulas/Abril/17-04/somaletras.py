"""# lista com o alfabeto
alfabeto = "abcdefghijklmnopqrstuvwxyz"

# le as variaveis
letra1 = raw_input()
letra2 = raw_input()


# a funcao index retorna o indice em que a letra se encontra dentro de alfabeto
soma = alfabeto.index(letra1) + alfabeto.index(letra2)

# tira o modulo da soma pra saber o indice exato do resultado da soma feita
i = soma % len(alfabeto)

# imprime o resultado
print alfabeto[i]
"""

letra1 = raw_input()
letra2 = raw_input()

indiceA = ord('a')

resultado = (ord(letra1) - indiceA) + (ord(letra2) - indiceA)

if resultado > 25:
	resultado -= 26

print chr(resultado+indiceA)
