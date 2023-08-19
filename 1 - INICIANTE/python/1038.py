entrada = str(input()).split(' ')
a, b = int(entrada[0]), int(entrada[1])
valor = float()

print('Total: R$ ', end='')
if a == 1:
    valor = b*4
    print('%.2f' %valor)
elif a == 2:
    valor = b*4.50
    print('%.2f' %valor)
elif a == 3:
    valor = b*5
    print('%.2f' %valor)
elif a == 4:
    valor = b*2
    print('%.2f' %valor)
elif a == 5:
    valor = b*1.50
    print('%.2f' %valor)
