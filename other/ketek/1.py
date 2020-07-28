def main():
	n = int(input())
	s = bin(n).replace("0b","")
	s = ''.join(reversed(s))
	# print(s)
	n1 = int(s,2)
	print(n1)

if __name__ == '__main__':
	main()