nums = list()
for c in range(0, 100):
    nums.append(int(input()))
maior = max(nums)
print('''{}
{}'''.format(maior, nums.index(maior)+1))
