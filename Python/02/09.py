n = input()
ans = 0
for s in n:
    if s.isdigit():
        ans += int(s)
print(ans)
