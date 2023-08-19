def notavalida(num):
    if num<0 or num>10:
        print('nota invalida')
    else:
        global cont, media
        media.append(num)
        cont += 1
        return num

media = list()
cont = 0

while True:
    num = float(input())
    notavalida(num)
    if cont == 2:
        break

print('media = {:.2f}'.format((media[0]+media[1])/2))
