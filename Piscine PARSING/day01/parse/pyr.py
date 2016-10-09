#!/usr/bin/env python3

id = [['a'..'z'|'A'..'Z'|'_']['0'..'9'|'a'..'z'|'A'..'Z'|'_']*]

just_equal = [ '=' !'='] #in C

all_but_eol = [ ~'\n'+]
all_but_eol2 = [ ->'\n'] # read the first \n equivalent to ~'\n'+ '\n'

