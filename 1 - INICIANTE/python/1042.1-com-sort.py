num = str(input()).split(' ')
a, b, c = int(num[0]), int(num[1]), int(num[2]) #criei as variaveis a,b,c para transformar em inteiro os numeros que sao digitados na entrada principal em formato str
lista = [a, b, c] #a lista foi criada com as variaveis inteiras para uso da função sort()
lista.sort() #o comando sort coloca a lista em ordem crescente

print('{}\n' '{}\n' '{}\n'.format(lista[0], lista[1], lista[2]))
print('{}\n' '{}\n' '{}'.format(num[0], num[1], num[2]))
