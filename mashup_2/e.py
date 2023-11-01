#https://www.geeksforgeeks.org/python-program-for-find-cubic-root-of-a-number/

import decimal
from functools import reduce

def cubicaaaaa(n):
    x = n
    y = (2 * x + n / x**2) / 3
    while abs(x - y) >= 0.000001:
        x = y
        y = reduce(lambda a, b: (2 * a + n / b**2) / 3, [y, y])
    return y

n = int(input())

raiz_cubica = cubicaaaaa(n)

if(raiz_cubica%int(raiz_cubica) == 0):
    print(int(raiz_cubica))
else:
    print(-1)

