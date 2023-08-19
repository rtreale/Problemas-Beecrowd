while True:
    nums = str(input()).split(' ')
    x, y = int(nums[0]), int(nums[1])
    if x == 0 or y == 0:
        break
    else:
        if x>=1 and y >=1:
            print('primeiro')
        elif x<=-1 and y>=1:
            print('segundo')
        elif x<=-1 and y<=-1:
            print('terceiro')
        else:
            print('quarto')
