soma, cont = 0, 0
while True:
    n = int(input())
    if n < 0:
        print(f'{(soma/cont):.2f}')
        break
    cont += 1
    soma += n
