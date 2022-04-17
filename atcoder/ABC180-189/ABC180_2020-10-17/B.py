import math

n = int(input())
# x = []
# for i in range(n):
# 	x[i] = int(input())
x = list(map(int, input().split(" ")))

m = 0
c = 0
y = 0.0
for j in range(0, len(x) - 1):
	if m >= 0:
		m += x[j]
	else:
		m -= x[j]
	y += x[j] * x[j]
	if c < x[j]:
		x = x[j]

y = math.sqrt(y)

print(m)
print(y)
print(c)
