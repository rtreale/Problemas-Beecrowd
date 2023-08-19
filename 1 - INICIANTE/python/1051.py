salario = float(input())
imposto = 0
if salario<=2000:
    print('Isento')
if 2000<salario<=3000:
    imposto = (salario-2000.01)*0.08
    print('R$ %.2f' % imposto)
if 3000<salario<=4500:
    imposto = (999.99*0.08)+((salario-3000.01)*0.18)
    print('R$ %.2f' % imposto)
if salario>4500:
    imposto = (999.99*0.08)+(1499.99*0.18)+((salario-4500)*0.28)
    print('R$ %.2f' % imposto)
