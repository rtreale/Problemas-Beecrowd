valores = str(input()).split(' ')
a, b, c = int(valores[0]), int(valores[1]), int(valores[2])

if (a > b and a > c) or (a == b and a > c):
    print('%d eh o maior' %a)
elif (b > a and b > c) or (a == b and b > c):
    print('%d eh o maior' %b)
else:
    print('%d eh o maior' %c)
