while True:
    nums = str(input()).split(' ')
    x, y = int(nums[0]), int(nums[1])
    if x == y:
        break
    else:
        if x < y:
            print('Crescente')
        else:
            print('Decrescente')
