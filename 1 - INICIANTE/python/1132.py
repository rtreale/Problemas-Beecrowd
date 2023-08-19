x, y = int(input()), int(input())
soma = 0
if x < y:
    for c in range(x, y+1):
        if c % 13 != 0:
            soma += c
elif x > y:
    for c in range(y, x+1):
        if c % 13 != 0:
            soma += c
else:
    if x % 13 != 0:
        soma += x
print(soma)