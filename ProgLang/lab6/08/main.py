a = 'Hello world'
b = a
c = a[:]

print(a, id(a))
print(b, id(b))
print(a is b)

print(c, id(c))
print(a is c)