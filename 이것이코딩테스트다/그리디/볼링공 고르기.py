n, m = map(int, input().split())

ball = list(map(int, input().split()))

ball_size = [0]*(m+1)
for b in ball:
	ball_size[b] += 1

result = n*(n-1)//2

for i in ball_size:
	result -= i*(i-1)//2

print(result)