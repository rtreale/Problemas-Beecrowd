x, y, z = 7, 6, 5
for a in range(1, 10, 2):
    print('I={} J={}'.format(a, x))
    print('I={} J={}'.format(a, y))
    print('I={} J={}'.format(a, z))
    x += 2
    y += 2
    z += 2
