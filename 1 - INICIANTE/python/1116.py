n = int(input())
for c in range(0, n):
    nums = str(input()).split(' ')
    numerador, denominador = int(nums[0]), int(nums[1])
    if denominador == 0:
        print('divisao impossivel')
    else:
        print('{:.1f}'.format(numerador/denominador))
