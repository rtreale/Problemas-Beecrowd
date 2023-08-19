while True:
    x = int(input())
    while True:
        z = int(input())
        if z > x:
            break
        else:
            continue
    soma, cont = 0, 0
    for c in range(x, z):
        soma += c
        cont += 1
        if soma >= z:
            break
    break
print(cont)