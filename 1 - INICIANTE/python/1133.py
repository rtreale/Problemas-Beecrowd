dados = [0, 0]
dados[0], dados[1] = int(input()), int(input())
dados.sort()
if dados[0] == dados[1] and (dados[0] % 5 == 2 or dados[0] % 5 == 3):
    print(dados[0])
if dados[0] != dados[1]:
    for c in range(dados[0]+1, dados[1]):
        if c % 5 == 2 or c % 5 == 3:
            print(c)
