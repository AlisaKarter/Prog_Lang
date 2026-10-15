num = list(map(int, input().split()))
ans = []

for n in num:
    d = 2
    while n % d != 0:
        d += 1
    ans.append(str(d))

print(" ".join(ans))
