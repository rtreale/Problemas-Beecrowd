n = int(input())
while n != 0:
    dados = str(input()).strip().split()
    x = int(dados[0])
    y = int(dados[1])
    soma = 0
    if x % 2 != 0:
        while y != 0:
            y -= 1
            soma += x
            x += 2
    else:
        x += 1
        while y != 0:
            y -= 1
            soma += x
            x += 2
    n -= 1
    print(soma)
