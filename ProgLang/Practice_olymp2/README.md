### Задача 1. Маршрутка
```py
n = int(input())
l = n // 15 * 15
r = n % 15
print(l, r)
```

### Задача 2. Сумма половин
```py
n = input()
q = len(n) // 2

a = int(n[:q])
b = int(n[q:])
print(a + b)
```

### Задача 3. Жажда
```py
n = int(input())
w = n / 3
print("%.3f" % w)
```

### Задача 4. Рубли и копейки
```py
price = float(input())
kops = round(price * 100)
rub = kops // 100
kop = kops % 100

print(rub, "rub", kop, "kop")
```

### Задача 5. Отчет
```py
n, m, c, k = map(int, input().split())

l = n * m - k
p = (l + 199) // 200
print(p * c)
```

### Задача 6. Подарки
```py
n, m, k = map(int, input().split())
tc = n * m
b = tc // k

if tc % k != 0:
    b = b + 1
print(b)
```

### Задача 7. Датчик пульса
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

### Задача 8. Точки на прямой
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

### Задача 9. Буквы и цифры
```py
s = input()
summ = 0

for a in s:
    if a >= "0" and a <= "9":
        summ = summ + int(a)
print(summ)
```

### Задача 10. Скобки в зазеркалье
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

### Задача 11. Разворот слов
```py
s = input().split()

for a in s:
    rev = ""
    for b in a:
        rev = b + rev
    print(rev, end=" ")
```

### Задача 12. Минимальные делители
```py
n = input().split()

for a in n:
    num = int(a)
    d = 2
    while num % d != 0:
        d = d + 1
    print(d, end=" ")
```

### Задача 13. Сумма делителей
```py
n = int(input())
ts = 0

for a in range(1, n):
    if n % a == 0:
        ts = ts + a
print(ts)
```

### Задача 14. Игра в пробке
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

### Задача 15. Прибыль
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
