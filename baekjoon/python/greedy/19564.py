txt = list(input())

pre_t = txt[0]
cnt = 1
for t in txt[1:]:
	if ord(pre_t)>=ord(t):
		cnt+=1
	pre_t = t

print(cnt)