n = 1000 - int(input())

cnt = 0
for c in [500,100,50,10,5,1]:
	cnt += n//c
	n = n%c

print(cnt)