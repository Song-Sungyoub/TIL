a, b = input().split()

print(sum(list(map(int, [a.replace('6', '5'), b.replace('6', '5')]))))
print(sum(list(map(int, [a.replace('5', '6'), b.replace('5', '6')]))))
