while True:
    nums = str(input()).split(' ')
    m, n = int(nums[0]), int(nums[1])
    cont = 0
    if m <= 0 or n <= 0:
        break
    else:
        if m>n:
            for txt in range(n, m+1):
                print('{}'.format(txt), end=' ')
                cont += txt
            print('Sum={}'.format(cont))
        else:
            for txt in range(m, n+1):
                print('{}'.format(txt), end=' ')
                cont += txt
            print('Sum={}'.format(cont))
