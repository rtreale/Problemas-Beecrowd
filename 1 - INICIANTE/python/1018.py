value = int(input())

if value<0:
    value = -value

print(value)

n_100 = int(value/100)
n_50 = int((value%100)/50)
n_20 = int(((value%100)%50)/20)
n_10 = int((((value%100)%50)%20)/10)
n_5 = int(((((value%100)%50)%20)%10)/5)
n_2 = int((((((value%100)%50)%20)%10)%5)/2)
n_1 = int(((((((value%100)%50)%20)%10)%5)%2)/1)

print('{} nota(s) de R$ 100,00\n{} nota(s) de R$ 50,00\n{} nota(s) de R$ 20,00\n{} nota(s) de R$ 10,00\n{} nota(s) de R$ 5,00\n{} nota(s) de R$ 2,00\n{} nota(s) de R$ 1,00'.format(n_100, n_50, n_20, n_10, n_5, n_2, n_1))
