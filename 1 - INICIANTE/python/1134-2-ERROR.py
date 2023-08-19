dados = {'Alcool':0, 'Gasolina':0, 'Diesel':0}
value = 0
while True:
    while True:
        value = int(input())
        if value < 1 or value > 4:
            continue
        else:
            break
    if value == 1:
        dados['Alcool'] += 1
    elif value == 2:
        dados['Gasolina'] += 1
    elif value == 3:
        dados['Diesel'] += 1
    else:
        print('MUITO OBRIGADO')
        for k, v in dados.items():
            print('{}: {}'.format(k, v))
        break
