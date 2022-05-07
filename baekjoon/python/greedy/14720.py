n = input()

milk = map(int, input().split())

cnt = 0
for m in milk:
    if cnt%3 == m:
        cnt += 1
        
print(cnt)
