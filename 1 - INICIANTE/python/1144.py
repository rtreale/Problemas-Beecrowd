n = int(input())
init = 1
while n != 0:
    print(init, init**2, init**3)
    print(init, init**2+1, init**3+1)
    init += 1
    n -= 1
