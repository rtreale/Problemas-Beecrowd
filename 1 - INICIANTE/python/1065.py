par = 0
for c in range(0, 5):
    n = int(input())
    if n % 2 == 0:
        par += 1
print('{} valores pares'.format(par))
