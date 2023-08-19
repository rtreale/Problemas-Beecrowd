value = input().split(' ')
ho, mo, hf, mf = int(value[0]), int(value[1]), int(value[2]), int(value[3])
hora, minuto = int(), int()

if hf==ho:
    if mf==mo:
        hora = 24
        minuto = 0
    elif mf>mo:
        hora = 0
        minuto = mf-mo
    elif mf<mo:
        hora = 23
        minuto = (60-mo)+mf

elif hf>ho:
    if mf==mo:
        hora = hf-ho
        minuto = 0
    elif mf>mo:
        minuto = mf-mo
        hora = hf-ho
    elif mf<mo:
        if hf-ho==1:
            hora = 0
            minuto = (60-mo)+mf
        else:
            hora = hf-ho-1
            minuto = (60-mo)+mf

elif hf<ho:
    if mf==mo:
        hora = (24-ho)+hf
        minuto = 0
    elif mf>mo:
        hora = (24-ho)+hf
        minuto = mf-mo
    elif mf<mo:
        minuto = (60-mo)+mf
        hora = (23-ho)+hf

print('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(hora, minuto))
