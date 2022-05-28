n = int(input())

coin = list(map(int, input().split()))

coin.sort()

target = 0
for c in coin:
	if c>target:
		break
	result += c

print(target)