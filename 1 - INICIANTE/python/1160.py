def dados():
    dados = str(input()).split()
    pa, pb, g1, g2 = int(dados[0]), int(dados[1]), float(dados[2]), float(dados[3])
    anos = 0
    while pa <= pb:
        if g1 != 0:
            pa += int(pa * (g1 / 100))
        if g2 != 0:
            pb += int(pb * (g2 / 100))
        anos += 1
        if anos > 100:
            break
    if anos > 100:
        print('Mais de 1 seculo.')
    else:
        print(f'{anos} anos.')



n = int(input())
for c in range(0, n):
    dados()

