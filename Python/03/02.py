t = int(input())
for i in range(t):
    n = int(input())
    p, q = map(int, input().split())
    
    res = "0."
    c = p
    for i in range(n):
        c *= 2
        d = c // q
        res += str(d)
        c %= q
    
    print(res)
