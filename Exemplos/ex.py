qtd_livros = input()

A = (qtd_livros * 0.25) + 7.5
B = (qtd_livros * 0.50) + 2.5

if A < B:
	print "Criterio A, %.1f reais" % A
else:
	print "Criterio B, %.1f reais" % B