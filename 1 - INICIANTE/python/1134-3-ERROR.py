def validacao_de_entrada():
    while True:
        num = int(input())
        if num < 1 or num > 4:
            continue
        else:
            return num


dados = {'Alcool':0, 'Gasolina':0, 'Diesel':0}
while True:
    value = validacao_de_entrada()
    if value == 1:
        dados['Alcool'] += 1
    elif value == 2:
        dados['Gasolina'] += 1
    elif value == 3:
        dados['Diesel'] += 1
    elif value == 4:
        break
print('MUITO OBRIGADO')
for k, v in dados.items():
    print('{}: {}'.format(k, v))
