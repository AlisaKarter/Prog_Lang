t = int(input())

for i in range(t):
    nums = list(map(int, input().split()))
    p1 = nums[0]
    q1 = nums[1]
    p2 = nums[2]
    q2 = nums[3]
    p3 = nums[4]
    q3 = nums[5]
    p4 = nums[6]
    q4 = nums[7]

    a1 = p1 * q2 + p2 * q1
    a2 = q1 * q2

    b1 = p3 * q4 + p4 * q3
    b2 = q3 * q4

    left = a1 * b2
    right = b1 * a2

    if left > right:
        print(1, end=' ')
    elif left == right:
        print(0, end=' ')
    else:
        print(-1, end=' ')

print()

