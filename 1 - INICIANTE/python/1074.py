n = int(input())
for c in range(0, n):
    m = int(input())
    if m == 0:
        print('NULL')
    elif (m > 0) and (m % 2 == 0):
        print('EVEN POSITIVE')
    elif (m > 0) and (m % 2 != 0):
        print('ODD POSITIVE')
    elif (m < 0) and (m % 2 == 0):
        print('EVEN NEGATIVE')
    else:
        print('ODD NEGATIVE')