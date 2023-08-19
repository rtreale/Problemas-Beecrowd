while True:
    n = int(input())
    if 0<n<13:
        break
    else:
        continue
fat = n
for c in range(n-1, 1, -1):
    fat *= c
print(fat)
