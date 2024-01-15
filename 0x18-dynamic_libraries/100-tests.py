import random
from ctypes import CDLL

cops = CDLL('./100-operations.so')

add, sub, mul, div, mod = cops.add, cops.sub, cops.mul, cops.div, cops.mod

a = random.randint(-111, 111)
b = random.randint(-111, 111)

print("{} + {} = {}".format(a, b, add(a, b)))
print("{} - {} = {}".format(a, b, sub(a, b)))
print("{} * {} = {}".format(a, b, mul(a, b)))
print("{} / {} = {}".format(a, b, div(a, b)))
print("{} % {} = {}".format(a, b, mod(a, b)))
