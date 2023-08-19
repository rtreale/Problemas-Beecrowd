linha1 = input()
linha2 = input()

lista1 = linha1.split()
lista2 = linha2.split()

a1 = int(lista1[1])
a2 = float(lista1[2])
b1 = int(lista2[1])
b2 = float(lista2[2])

valor = a1*a2+b1*b2

print('VALOR A PAGAR: R$ %.2f' %valor)
