
def func(n):

	add= 0
	for i in range(1,n+1):
	 add+=n%i
	return add

	l = input()
	r = input()
	add =0
	for i in range(1, r+1):
	
		if func(i)==func(i-1) :
             add = i+add
	
	print(add)