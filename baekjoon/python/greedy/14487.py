n = int(input())

ll = list(map(int, input().split()))

print(sum(sorted(ll)[:-1]))