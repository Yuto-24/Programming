n = gets
x = gets.split(' ')

y = 0
m = 0
c = 0

while n > 0
	m += abs(x[n])
	y += x[n]*x[n]
	if c < x[n]
		x = x[n]
	n -= 1;
end

y = sqrt(y)

print(m)
print("%15.f",n)
print(c)
