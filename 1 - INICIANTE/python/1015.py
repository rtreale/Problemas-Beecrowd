from math import pow
p1 = str(input()).split(' ')
p2 = str(input()).split(' ')

x1, y1, x2, y2 = float(p1[0]), float(p1[1]), float(p2[0]), float(p2[1])
distancia_1 = (x2-x1)**2 + (y2-y1)**2
distancia_2 = pow(distancia_1, 1/2)

print('%.4f' %distancia_2)
