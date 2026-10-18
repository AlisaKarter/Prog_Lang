a = 'Hello world'

# Способ 1
b = a
print(f"  a = {a}, id(a) = {id(a)}")
print(f"  b = {b}, id(b) = {id(b)}")
print(f"  a is b: {a is b}")  # True

print()

# Способ 2
c = a[:]
print(f"  a = {a}, id(a) = {id(a)}")
print(f"  c = {c}, id(c) = {id(c)}")
print(f"  a is c: {a is c}")  # True

print()

# Значения равны
print(f"a == b: {a == b}")  
print(f"a == c: {a == c}")  
