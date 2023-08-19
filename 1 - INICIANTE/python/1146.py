while True:
    n = int(input())
    if n == 0:
        break
    for c in range(1, n):
        print(c, end=' ')
    print(n)
