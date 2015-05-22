# -*- coding: utf-8 -*-

j1 = raw_input()
j2 = raw_input()

if j1 == j2:
    print "empate"
elif (j1 == "R" and j2 == "S") or (j1 == "S" and j2 == "P") or \
     (j1 == "P" and j2 == "R"):
    print "jog1"
else:
    print "jog2"