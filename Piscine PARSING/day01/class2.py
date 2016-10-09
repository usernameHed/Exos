#!/usr/bin/env python3

class A:
    def __init__(self):
        self.a = 12

class B(A):
    def __init(self):
        A.__init(self) #chain
        self.c = 42

b = B()
print(vars(b))        
