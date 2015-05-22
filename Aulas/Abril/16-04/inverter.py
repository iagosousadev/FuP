letra = raw_input()

"""
alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
if letra in alfabeto:
	if letra == letra.lower():
		print letra.upper()
	else:
		print letra.lower()
else:
	print "erro"
"""

if ord('a') <= ord(letra) and ord(letra) <= ord('z'):
	print chr(ord(letra)-32)
elif ord('A') <= ord(letra) and ord(letra) <= ord('Z'):
	print chr(ord(letra)+32)
else:
	print "erro"