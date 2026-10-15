import math

x, y = map(float, input().split())
l = math.ceil(x)
r = math.floor(y)

if l > r:
    print(0)
    
else:
    print(r - l + 1)
