x = 0
y1, y2, y3 = 1, 2, 3
for c in range(0, 11):
    if c == 0 or c == 5 or c == 10:
        print('I={:.0f} J={:.0f}'.format(x, y1))
        print('I={:.0f} J={:.0f}'.format(x, y2))
        print('I={:.0f} J={:.0f}'.format(x, y3))
    else:
        print('I={:.1f} J={:.1f}'.format(x, y1))
        print('I={:.1f} J={:.1f}'.format(x, y2))
        print('I={:.1f} J={:.1f}'.format(x, y3))
    x += 0.2
    y1 += 0.2
    y2 += 0.2
    y3 += 0.2
