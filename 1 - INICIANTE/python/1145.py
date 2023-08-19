entrada = str(input()).split()
x, y = int(entrada[0]), int(entrada[1])
n = x
for c in range(1, y+1):
    if n > 1:
        print(c, end=' ')
        n -= 1
    else:
        print(c)
        n = x
