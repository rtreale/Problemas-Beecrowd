entrada = str(input()).split(' ')
a, b, c, d = int(entrada[0]), int(entrada[1]), int(entrada[2]), int(entrada[3])

if (b>c) and (d>a) and ((c+d)>(a+b)) and (c>0) and (d>0) and (a%2==0):
    print('Valores aceitos')
else:
    print('Valores nao aceitos')
