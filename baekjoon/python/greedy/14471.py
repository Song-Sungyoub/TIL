n, m = map(int, input().split())

a = []
for _ in range(m):
	a.append(int(input().split()[0]))

a = sorted(a)[::-1]

cnt = 0
for i in a[:-1]:
	if i<n:
		cnt += n-i

print(cnt)