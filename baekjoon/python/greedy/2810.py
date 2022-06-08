people = int(input())
holder = len(input().replace('LL', 'L'))+1

if people<=holder:
	print(people)
else:
	print(holder)