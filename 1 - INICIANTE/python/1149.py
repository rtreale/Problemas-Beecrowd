dados = str(input()).strip().split(' ')
a = int(dados[0])
n = 0
for flut in range(1, len(dados)):
    if int(dados[flut]) > 0:
        n = int(dados[flut])
        break
value = 0
for c in range(0, n):
    value += a + c
print(value)
