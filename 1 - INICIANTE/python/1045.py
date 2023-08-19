value = input().split(' ')
a, b, c = float(value[0]), float(value[1]), float(value[2])
lista = [a, b, c]
lista.sort(reverse=True) #ordenar decrescente
a, b, c = lista[0], lista[1], lista[2] #voltando as variaveis apenas pra ficar mais facil durante a escrita do if

if (a>=(b+c)):
    print('NAO FORMA TRIANGULO')
    exit(0)
if (a**2==(b**2+c**2)):
    print('TRIANGULO RETANGULO')
if (a**2>(b**2+c**2)):
    print('TRIANGULO OBTUSANGULO')
if (a**2<(b**2+c**2)):
    print('TRIANGULO ACUTANGULO')
if (a==b==c):
    print('TRIANGULO EQUILATERO')
if (a==b!=c) or (b==c!=a) or (c==a!=b):
    print('TRIANGULO ISOSCELES')
