hours = int(input())
dist = int(input())
consumo_medio = 12 #km/l

combustivel = hours*dist/consumo_medio

print('%.3f' %combustivel)
