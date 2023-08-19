n = int(input())
exp = {'coelhos':0, 'ratos':0, 'sapos':0}
tot = 0
for c in range(0, n):
    dados = str(input()).split()
    if dados[1] == 'C':
        exp['coelhos'] += int(dados[0])
    elif dados[1] == 'R':
        exp['ratos'] += int(dados[0])
    elif dados[1] == 'S':
        exp['sapos'] += int(dados[0])
    dados.clear()
tot = sum(exp.values())
print('Total: {} cobaias'.format(tot))
for k, v in exp.items():
    print('Total de {}: {}'.format(k, v))
for k, v in exp.items():
    print('Percentual de {}: {:.2f} %'.format(k, (v/tot)*100))
