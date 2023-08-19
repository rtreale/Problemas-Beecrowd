n = int(input())
while n != 0:
    x = int(input())
    soma = 0
    for c in range(1, x):
        if x % c == 0:
            soma += c
    if soma == x:
        print(f'{x} eh perfeito')
    else:
        print(f'{x} nao eh perfeito')
    n -= 1
