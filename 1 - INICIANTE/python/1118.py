def validacao_notas():
    notas = list()
    while True:
        n = float(input())
        if n<0 or n>10:
            print('nota invalida')
            continue
        else:
            notas.append(n)
            if len(notas) == 2:
                print('media = {:.2f}'.format((notas[0]+notas[1])/2))
                notas.clear()
                break


while True:
    validacao_notas()
    while True:
        num = int(input('novo calculo (1-sim 2-nao)\n'))
        if num != 1 and num != 2:
            continue
        elif num == 1 or num == 2:
            break
    if num == 2:
        break
