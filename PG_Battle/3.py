l = list(map(int, input().split()))

n = l[0]
m = l[1]
a = l[2]
b = l[3]

# mを大きい数とする
if n > m:
	temp = m
	m = n
	n = m

# bを大きい数とする
if a > b:
	temp = b
	b = a
	a = b


all_pattern = 1
if m == 1:
	all_pattern = 1
else:
	for i in range(m + 1, n + m + 1):
		all_pattern *= i
		print("1: ", all_pattern)
	for i in range(2, n + 1):
		all_pattern /= i
		print("2: ", all_pattern)

point_pattern = 1
if b == 1:
	point_pattern = 1
else:
	for i in range(b + 1, a + b + 1):
		point_pattern *= i
		print("3: ", point_pattern)
	for i in range(2, a + 1):
		point_pattern /= i
		print("4: ", point_pattern)

if n < a or m < b:
	print(int(all_pattern % 998244353))
else:
	print(int((all_pattern - point_pattern) % 998244353))
	print(2)