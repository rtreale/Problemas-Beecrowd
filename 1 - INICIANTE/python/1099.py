n = int(input())
resultados = []
somaimpar = 0
for cont in range(0, n, 1):
    num = str(input()).split(' ')
    x, y = int(num[0]), int(num[1])
    if x == y:
        somaimpar = 0
        resultados.append(somaimpar)
    if x < y:
        for c in range(x+1, y, 1):
            if c % 2 != 0:
                somaimpar += c
        resultados.append(somaimpar)
    elif x > y:
        for c in range(x-1, y, -1):
            if c % 2 != 0:
                somaimpar += c
        resultados.append(somaimpar)
    somaimpar = 0
    num.clear()

for itens in resultados:
    print(itens)
