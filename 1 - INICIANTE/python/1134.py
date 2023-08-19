alcool, gasolina, diesel = 0, 0, 0
while True:
    while True:
        n = int(input())
        if n < 1 or n > 4:
            continue
        else:
            break
    if n == 1:
        alcool += 1
    elif n == 2:
        gasolina += 1
    elif n == 3:
        diesel += 1
    elif n == 4:
        break
print('''MUITO OBRIGADO
Alcool: {}
Gasolina: {}
Diesel: {}'''.format(alcool, gasolina, diesel))
