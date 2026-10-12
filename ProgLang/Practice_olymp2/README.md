### ������ 1. Kisa and Osya was here
```py
n = int(input())
l = n // 15 * 15
r = n % 15
print(l, r)
```

### ������ 2. ��� ���� ���
```py
n = input()
q = len(n) // 2

a = int(n[:q])
b = int(n[q:])
print(a + b)
```

### ������ 3. ������ �� ������
```py
n = int(input())
w = n / 3
print("%.3f" % w)
```

### ������ 4. ������ � �����
```py
price = float(input())

kops = round(price * 100)
rub = kops // 100
kop = kops % 100

print(rub, "rub", kop, "kop")
```

### ������ 5. ����� �� ���������
```py
n, m, c, k = map(int, input().split())

l = n * m - k
p = (l + 199) // 200
print(p * c)
```

### ������ 6. �������� ������
```py
n, m, k = map(int, input().split())
tc = n * m
b = tc // k

if tc % k != 0:
    b = b + 1
print(b)
```

### ������ 7. �����
```py
d = input().split()
n = int(d[0])
t = float(d[1])
pul = (n * 60) / t

res = int(pul)
if pul > res:
    res = res + 1
print(res)
```

### ������ 8. ����� ������� �����
```py
import math

data = input().split()
x = float(data[0])
y = float(data[1])
start = math.ceil(x)
end = math.floor(y)

dot = end - start + 1

if dot < 0:
    dot = 0
print(dot)
```

### ������ 9. ������ ������
```py
s = input()
summ = 0

for a in s:
    if a >= "0" and a <= "9":
        summ = summ + int(a)
print(summ)
```

### ������ 10. ���������� �� �������
```py
s = input()
res = ""

for a in s:
    if a == "(":
        res = ")" + res
    else:
        res = "(" + res
print(res)
```

### ������ 11. 3x+1
```py
s = input().split()

for a in s:
    rev = ""
    for b in a:
        rev = b + rev
    print(rev, end=" ")
```

### ������ 12. ��������� ������� ������
```py
n = input().split()

for a in n:
    num = int(a)
    d = 2
    while num % d != 0:
        d = d + 1
    print(d, end=" ")
```

### ������ 13. ����� � �������
```py
n = int(input())
ts = 0

for a in range(1, n):
    if n % a == 0:
        ts = ts + a
print(ts)
```

### ������ 14. �� ������� �� ...
```py
n = int(input())

m = 0
d = 0

for a in range(n):
    numb = int(input())
    if numb % 3 == 0:
        m = m + 2
    else:
        d = d + 1
print(m, d, sep=":")
```

### ������ 15. ���
```py
n = int(input())
prof1 = 0

for a in range(n):
    q = input().split()
    price = int(q[0])
    cost = int(q[1])
    
    prof2 = price - cost
    if prof2 > 0:
        prof1 = prof1 + prof2
print(prof1)
```