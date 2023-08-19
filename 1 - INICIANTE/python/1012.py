dados = str(input()).split(" ")
a, b, c = float(dados[0]), float(dados[1]), float(dados[2])
pi = 3.14159

triangulo = (a*c/2)
circulo = pi*(c**2)
trapezio = c*(a+b)/2
quadrado = b**2
retangulo = a*b

print('TRIANGULO: {:.3f}\nCIRCULO: {:.3f}\nTRAPEZIO: {:.3f}\nQUADRADO: {:.3f}\nRETANGULO: {:.3f}' .format(triangulo, circulo, trapezio, quadrado, retangulo))
