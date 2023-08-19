salario = float(input())
novo_salario, valor_reajuste, percentual= float(), float, int()


if 0<=salario<=400.00:
    novo_salario = salario*1.15
    valor_reajuste = salario*1.15-salario
    percentual = 15

elif 400.00<salario<=800.00:
    novo_salario = salario * 1.12
    valor_reajuste = salario * 1.12 - salario
    percentual = 12

elif 800.00<salario<=1200.00:
    novo_salario = salario * 1.10
    valor_reajuste = salario * 1.10 - salario
    percentual = 10

elif 1200.00<salario<=2000.00:
    novo_salario = salario * 1.07
    valor_reajuste = salario * 1.07 - salario
    percentual = 7

else:
    novo_salario = salario * 1.04
    valor_reajuste = salario * 1.04 - salario
    percentual = 4

print('''Novo salario: {:.2f}
Reajuste ganho: {:.2f}
Em percentual: {} %'''.format(novo_salario, valor_reajuste, percentual))
