while True:
    x = int(input())
    if x == 0:
        break
    else:
        cont = 5
        soma = 0
        if x % 2 == 0:
            while cont != 0:
                soma += x
                x = x+2
                cont -= 1
        else:
            x = x+1
            while cont != 0:
                soma += x
                x = x+2
                cont -= 1
        print(soma)
