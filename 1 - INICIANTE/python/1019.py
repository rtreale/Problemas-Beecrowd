entrada_segundos = int(input())

horas = int(entrada_segundos/3600)
minutos = int(entrada_segundos%3600/60)
segundos = int(entrada_segundos%3600%60)

print('{}:{}:{}'.format(horas, minutos, segundos))
