s = 0
v = 2
for c in (range(3, 40, 2)):
    s += c/v
    v = v*2
print(f'{(s+1):.2f}')
