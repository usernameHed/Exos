parse string: cut, check logical sequences, do something !
A is rule before ::=
A is a clause after !!=
'A' mean readu the caracter 'A'
| for alternative
; at the end

Rule ::= Fu | Bar;	Fu ::= 'a' 'b' 'c'; Bar ::= 'e' 'f' 'g';	could read "abc" or "efg"
RUle ::= 'a' 'b' | 'c' 'd';    read "ab" or "cd"
Rule ::= 'a' ['b' | 'c'] 'd';

hello ::= 'h' 'e' 'l' 'l' 'o';	read "hello"
digit ::= '0'|'1'...
digit ::= '0'..'9'

repeater:
? for 0-1
* for 0-N
+ for 1-N
char ::= 'a'..'z';
list ::= char [',' char]*
language ::= statement+;
statement ::= expr ';';
alpha ::= ['a..z'|'A'..'Z']+;
num ::= '0'..'9'+;
expr ::= id '=' add;
add ::= mul ['+' mul]*;
mul ::= prim ['*' prim]*;
prim ::= id
     | num
       | '(' add ')';


'a'    	     	 readtext(stream, "a");
"foobar"	 readtext(stream, 'foobar");
'a'..'z'	 readrange(stream, 'a', 'z');
