value = str(input()).split(' ')
a, b, c = float(value[0]), float(value[1]), float(value[2])

if (a+b>c) and (a+c>b) and (b+c>a):
    print('Perimetro = {:.1f}'.format((a+b+c)))
else:
    print('Area = {:.1f}'.format(((a+b)*c/2)))

