n = input()
ans = ""
n1 = ""

for s in n:
    n1 = s + n1

for s in n1:
    if s == '(':
        ans += ')'
    else:
        ans += '('
print(ans)
