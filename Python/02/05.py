n, m, c, k = map(int, input().split())

if((n * m - k) % 200 == 0):
    print((n * m - k)//200 * c)
    
else:
    print(((n * m - k)//200 + 1) * c)
