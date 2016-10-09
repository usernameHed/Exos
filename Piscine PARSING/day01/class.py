#!/usr/bin/env python3

class A:
    #class member
    b = 42

    #constructor
    def __init__(self, a: int):
        #instance member
        self.a = a
        self.z = "cool"

        #member function
        def f1(self):
            print("youpi")

        #class function
        def f2():
            print("f2")
print(A.b)
instance = A(12)
print(instance.a)
print(instance.z)
instance.f1()
A.f2()
