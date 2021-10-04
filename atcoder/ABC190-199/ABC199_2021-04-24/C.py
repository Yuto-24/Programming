n = int(input())
s = str(input())
s1 = list(s[:n])
s2 = list(s[n:])
q = int(input())
for i in range(q):
	t, a, b = map(int, input().split())
	a -= 1
	b -= 1
	if(t == 1):
		if(a < n):
			if(b < n):
				m = s1[a]
				s1[a] = s1[b]
				s1[b] = m
			else:
				b -= n
				m = s1[a]
				s1[a] = s2[b]
				s2[b] = m
		else:
			a -= n
			if(b < n):
				m = s2[a]
				s2[a] = s1[b]
				s1[b] = m
			else:
				b -= n
				m = s2[a]
				s2[a] = s2[b]
				s2[b] = m
	else:
		s1, s2 = s2, s1
ans1 = ""
ans2 = ""
for i in range(n):
	ans1 += s1[i]
	ans2 += s2[i]
print(ans1+ans2)
