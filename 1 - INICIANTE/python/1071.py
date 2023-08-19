x = int(input())
y = int(input())
if x>y:
    maior = x
    menor = y
else:
    maior = y
    menor = x
cont = 0
for c in range(menor+1, maior):
    if c % 2 != 0:
        cont += c
print(cont)
