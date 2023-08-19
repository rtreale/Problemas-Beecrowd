positivo = 0
for c in range(0, 6):
    n = float(input())
    if n>0:
        positivo += 1
print('{} valores positivos'.format(positivo))