m = int(input())
for c in range(1, m+1):
    if c % 2 == 0:
        print('{}^{} = {}'.format(c, 2, c*c))
