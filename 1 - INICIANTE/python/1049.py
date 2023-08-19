entrada1, entrada2, entrada3 = str(input()), str(input()), str(input())
entradas = [entrada1, entrada2, entrada3]

a11 = ['vertebrado', 'ave', 'carnivoro']
a12 = ['vertebrado', 'ave', 'onivoro']

a21 = ['vertebrado', 'mamifero', 'onivoro']
a22 = ['vertebrado', 'mamifero', 'herbivoro']

a31 = ['invertebrado', 'inseto', 'hematofago']
a32 = ['invertebrado', 'inseto', 'herbivoro']

a41 = ['invertebrado', 'anelideo', 'hematofago']
a42 = ['invertebrado', 'anelideo', 'onivoro']

#a11/a12
if entradas == a11:
    print('aguia')
elif entradas == a12:
    print('pomba')
#a21/a22
elif entradas == a21:
    print('homem')
elif entradas == a22:
    print('vaca')
#a31/a32
elif entradas == a31:
    print('pulga')
elif entradas == a32:
    print('lagarta')
#a41/a42
elif entradas == a41:
    print('sanguessuga')
elif entradas == a42:
    print('minhoca')
