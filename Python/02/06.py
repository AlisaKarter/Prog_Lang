n, m, k = map(int, input().split())

if((n * m) % k == 0):
    print((n * m)//k)
    
else:
    print(((n * m)//k + 1))
