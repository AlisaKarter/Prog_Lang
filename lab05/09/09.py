p1, q1 = map(int, input().split())
p2, q2 = map(int, input().split())
p3, q3 = map(int, input().split())
p4, q4 = map(int, input().split())

a1 = p1 * q2 + p2 * q1
a2 = q1 * q2

b1 = p3 * q4 + p4 * q3
b2 = q3 * q4

left = a1 * b2
right = b1 * a2

if left > right:
    print(1)
elif left == right:
    print(0)
else:
    print(-1)
