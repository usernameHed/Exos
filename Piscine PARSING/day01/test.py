#!/usr/bin/env python3

i = 3
print(type(i))
f = 4.4
print(type(f))
s = "cool"
print(type(s))
b = b"cool" #encode string to bytes
print(type(b))
s2 = b.decode("ascii") #decode bytes to string
print(type(s2))
b1 = True
b2 = False
print(type(b1))
print(b1)

i = int(3)
print(i)
print(type(i))

l = [1, 2, 3, 4]
print(type(l))
print(l)
d = {"tata": 1, "tutu": 2, "titi": 3}
print(type(d))
print(d)
s = {"a", "b", "c"}
print(type(s))
"""
while True:
    if a < 2 and c != 7:
        print("cool")
        break
    l = [1, 2, 3]
    for x in l:
        print(x)
"""
def my_func(a, b, c):
    print("")

    #new alternative syntaxe
def my_func2(a: str, b: int, c: list) -> bool:
    #...
    return True

