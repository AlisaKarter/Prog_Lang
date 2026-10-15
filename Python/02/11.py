n = input().split()
ans = ""

for word in n:
    n1 = ""
    for s in word:
        n1 = s + n1
    ans += n1 + " "

print(ans[:-1])

