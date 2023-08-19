ddd = [61, 71, 11, 21, 32, 19, 27, 31]
destination = ['Brasilia', 'Salvador', 'Sao Paulo', 'Rio de Janeiro', 'Juiz de Fora', 'Campinas', 'Vitoria', 'Belo Horizonte']

n = int(input())

if n in ddd:
    indice = ddd.index(n)
    print(destination[indice])

else:
    print('DDD nao cadastrado')