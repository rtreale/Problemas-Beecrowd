i = o = 0
n = int(input())
for c in range(0, n):
    d = int(input())
    if 10<=d<=20:
        i += 1
    else:
        o += 1
print('''{} in
{} out'''.format(i, o))
