word = [i - ord('A') for i in list(map(ord, input()))]
now = 0
cnt = 0
for w in word:
	ll = sorted([now, w])
	
	if ll[1]-ll[0] < 26-ll[1]+ll[0]:
		cnt += ll[1]-ll[0]
	else:
		cnt += 26-ll[1]+ll[0]
	now = w

print(cnt)