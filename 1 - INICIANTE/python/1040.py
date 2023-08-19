notas = str(input()).split(' ')
n1, n2, n3, n4 = float(notas[0]), float(notas[1]), float(notas[2]), float(notas[3])
media = (n1*2+n2*3+n3*4+n4*1)/10

if media<5.0:
    print('Media: %.1f\n' 'Aluno reprovado.' %media)
elif media>=7.0:
    print('Media: %.1f\n' 'Aluno aprovado.' %media)
else:
    print('Media: %.1f\n' 'Aluno em exame.' %media)
    exame = float(input())
    media_2 = (media+exame)/2
    if media_2>=5.0:
        print('Nota do exame: {}\n' 'Aluno aprovado.\n' 'Media final: {}'.format(exame, media_2))
    else:
        print('Nota do exame: {}\n' 'Aluno reprovado.\n' 'Media final: {}'.format(exame, media_2))
