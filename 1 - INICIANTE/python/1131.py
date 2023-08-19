def leitura_dados(vet):
    dados = str(input()).split()
    vet[0] += 1
    #cont += 1
    if dados[0] > dados[1]:
        vet[1] += 1
        #inter += 1
    elif dados[0] < dados[1]:
        vet[2] += 1
        #gremio += 1
    else:
        vet[3] += 1


vet = [0, 0, 0, 0]
while True:
    leitura_dados(vet)
    while True:
        n = int(input(('Novo grenal (1-sim 2-nao)\n')))
        if n == 1 or n == 2:
            break
        else:
            continue
    if n == 2:
        print('''{} grenais
Inter:{}
Gremio:{}
Empates:{}'''.format(vet[0], vet[1], vet[2], vet[3]))
        if vet[1] > vet[2]:
            print('Inter venceu mais')
        elif vet[1] < vet[2]:
            print('Gemio venceu mais')
        else:
            print('Nao houve vencedor')
        break
