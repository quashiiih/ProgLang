cnt = 1
for a in 'abcdefghijklmnopqrstuvwxyz':
    for b in range(100):
        globals()[a + str(b)] = cnt 
        cnt += 1

print(a0, a99)
print(k0, k99)
print(t32)
print(z0, z99)
