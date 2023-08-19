num = str(input()).split(' ')
a, b, c = int(num[0]), int(num[1]), int(num[2])

if(c<b):
    maior = b
    b = c
    c = maior
if(b<a):
    maior = a
    a = b
    b = maior
if(c<b):
    maior = b
    b = c
    c = maior

print('{}\n' '{}\n' '{}\n'.format(a, b, c))
print('{}\n' '{}\n' '{}'.format(num[0], num[1], num[2]))