value = input().split(' ')
a, b = int(value[0]), int(value[1])
time = int()

if (a>b):
    time = (24-a)+b
elif (a==b):
    time = 24
else:
    time = b-a

print('O JOGO DUROU %d HORA(S)' %time)
