entrada = str(input()).split(' ')
a, b, c = float(entrada[0]), float(entrada[1]), float(entrada[2])

delta = (b**2)-(4*a*c)

if delta<0 or a==0:
    print('Impossivel calcular')
else:
    r1 = (-b+pow(delta,1/2))/(2*a)
    r2 = (-b-pow(delta, 1/2))/(2*a)
    print('R1 = {:.5f}\nR2 = {:.5f}'.format(r1, r2))

