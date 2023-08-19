cont = 0
media = 0
for c in range(0, 6):
    n = float(input())
    if n > 0:
        media += n
        cont += 1
print('{} valores positivos\n{:.1f}'.format(cont, media/cont))
