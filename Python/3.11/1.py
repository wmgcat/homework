def factorial(x):
	nx = 1
	for i in range(x):
		nx *= i + 1
	return nx

def listFactorialNumbers(x):
	numbers = factorial(x)
	arr = list()
	for i in range(numbers, 0, -1):
		arr.append(factorial(i))
	return arr

print(factorial(3))
print(listFactorialNumbers(3))