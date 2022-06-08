n = input()
ll = sorted(list(map(int, input().split())))

print(sum([sum(ll[:i+1]) for i in range(len(ll))]))