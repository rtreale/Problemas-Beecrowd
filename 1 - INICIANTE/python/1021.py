value = float(input())

if value<0:
    value = -value

print('NOTAS:')

n_100 = int(value/100)
n_50 = int((value%100)/50)
n_20 = int(((value%100)%50)/20)
n_10 = int((((value%100)%50)%20)/10)
n_5 = int(((((value%100)%50)%20)%10)/5)
n_2 = int((((((value%100)%50)%20)%10)%5)/2)

print('{} nota(s) de R$ 100.00\n{} nota(s) de R$ 50.00\n{} nota(s) de R$ 20.00\n{} nota(s) de R$ 10.00\n{} nota(s) de R$ 5.00\n{} nota(s) de R$ 2.00'.format(n_100, n_50, n_20, n_10, n_5, n_2))

print('MOEDAS:')

n_1 = int(((((((value%100)%50)%20)%10)%5)%2)/1)
moedas = int((value-int(value))*100)

m_50 = int(moedas/50)
m_25 = int(moedas%50/25)
m_10 = int(moedas%50%25/10)
m_05 = int(moedas%50%25%10/5)
m_01 = int(moedas%50%25%10%5/1)


print('{} moeda(s) de R$ 1.00\n{} moeda(s) de R$ 0.50\n{} moeda(s) de R$ 0.25\n{} moeda(s) de R$ 0.10\n{} moeda(s) de R$ 0.05\n{} moeda(s) de R$ 0.01'.format(n_1, m_50, m_25, m_10, m_05, m_01))
