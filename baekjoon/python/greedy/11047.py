n, k = map(int, input().split())

ll = []
for _ in range(n):
	ll.append(int(input()))

ll = sorted(ll)[::-1]
cnt = 0

for c in ll:
	cnt += k//c
	k = k%c

print(cnt)