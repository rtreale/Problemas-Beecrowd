str_dia_o = str(input()).split()
str_time_o = str(input()).split()
str_dia_f = str(input()).split()
str_time_f = str(input()).split()

dia_o, dia_f = int(str_dia_o[1]), int(str_dia_f[1])
ho, hf, mo, mf, so, sf = int(str_time_o[0]), int(str_time_f[0]), int(str_time_o[2]), int(str_time_f[2]), int(str_time_o[4]), int(str_time_f[4])
w = (dia_f)-(dia_o)

#check segundos
if sf>so:
    z = sf-so
elif sf == so:
    z = 0
else:
    z = (sf+60)-so
    mf -= 1
#check minutos
if mf > mo:
    y = mf-mo
elif mf == mo:
    y = 0
else:
    y = (mf+60)-mo
    hf -= 1
#check horas
if hf > ho:
    x = hf-ho
elif hf == ho:
    x = 0
else:
    x = (hf+24)-ho
    w -= 1
print('{} dia(s)\n{} hora(s)\n{} minuto(s)\n{} segundo(s)'.format(w, x, y, z))
