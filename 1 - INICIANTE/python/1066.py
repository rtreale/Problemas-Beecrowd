par = impar = pos = neg = 0
for c in range(0, 5):
    n = int(input())
    if n % 2 == 0:
        par += 1
    if n > 0:
        pos += 1
    if n < 0:
        neg += 1
    if n % 2 != 0:
        impar += 1
print('''{} valor(es) par(es)
{} valor(es) impar(es)
{} valor(es) positivo(s)
{} valor(es) negativo(s)'''.format(par, impar, pos, neg))
