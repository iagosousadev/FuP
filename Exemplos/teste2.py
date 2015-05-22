alfabeto = "abcdefghijklmnopqrstuvwxyz"
letra = raw_input()
numero = input()

nova_letra = (alfabeto.index(letra) + numero) % 26

print alfabeto[nova_letra]
