dados = list()
media = list()
n = int(input())
for c in range(0, n):
    entrada = str(input()).split(' ')
    dados.append(entrada[:])
    entrada.clear()
for c in range(0, n):
    a = float(dados[c][0])*2
    b = float(dados[c][1])*3
    c = float(dados[c][2])*5
    media.append(a)
    media.append(b)
    media.append(c)
    dados.append(media[:])
    media.clear()
for c in range(n, len(dados)):
    print('{:.1f}'.format(sum(dados[c])/10))
