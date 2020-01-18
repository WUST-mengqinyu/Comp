# coding==utf-8
from random import randint, choice, shuffle, sample

with open("test/data.in", "w") as f:
    n = 8
    k = 3
    f.write(f"{n} {k}\n")
    a = [1, 2, 3, 4, 5, 6, 7, 8]
    for i in range(k):
        tt = randint(1, n)
        f.write(f"{tt}")
        shuffle(a)
        for j in range(tt):
            f.write(f" {a[j]}")
        f.write("\n")