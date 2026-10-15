n = int(input())
ans = 0

for i in range(n):
    a, b = map(int, input().split())
    s = a - b
    if s > 0:
        ans += s

print(ans)
