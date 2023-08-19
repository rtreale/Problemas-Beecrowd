while True:
    n = int(input())
    if 0<n<46:
        break
    else:
        continue
fibo = [0, 1]
if n == 1:
    print(fibo[0])
elif n == 2:
    print(fibo[0], fibo[1])
else:
    for c in range(0, n-2):
        fibo.append(fibo[c]+fibo[c+1])
    for c in fibo[:-1]:
        print(c, end=' ')
    print(fibo[n-1])
