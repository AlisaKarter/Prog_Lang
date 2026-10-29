s = input()
pos = 0
nums = []

while pos < len(s):
    z = 0
    while pos < len(s) and s[pos] == '0':
        z += 1
        pos += 1
    z = z + 1

    y_bin = s[pos:pos + z]
    pos += z
    y = int(y_bin, 2)

    x_bin = '1' + s[pos:pos + y - 1]
    pos += y - 1
    x = int(x_bin, 2)

    nums.append(x)

print(len(nums))
print(' '.join(map(str, nums)))
