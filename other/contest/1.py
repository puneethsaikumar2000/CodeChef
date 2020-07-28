t = int(input())

for i in range(t):
	n, q = [int(x) for x in input().split()]
	floors = 0
	curr = 0
	for j in range(q):
		f, d = [int(x) for x in input().split()]
		floors += abs(curr - f) + abs(f - d)
		curr = d
	print(curr)