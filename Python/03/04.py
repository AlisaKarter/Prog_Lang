n = int(input())
nums = list(map(int, input().split()))

res = ""

for i in nums:

    x_bin = bin(i)[2:]
    y = len(x_bin)

    y_bin = bin(y)[2:]
    z = len(y_bin)

    c = "0" * (z - 1) + y_bin + x_bin[1:]
    res += c

print(res)
