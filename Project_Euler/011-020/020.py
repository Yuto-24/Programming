import math

how = 100
n = 1
counta = 1

while counta <= how:
	n *= counta
	counta += 1

ans = 0

while n >= 1:
	print('n_b:', n)
	ans += (n % 10)
	n //= 10
	# n = math.floor(n)
	print('ans:', ans)
	print('n_a:', n)

print(ans)
