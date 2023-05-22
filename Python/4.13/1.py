import random

random.seed()

def createMatrix(m=10, n=10):
	matrix = []
	for i in range(m):
		matrix.append([])
		for j in range(n):
			matrix[i].append(random.randint(-50, 50))
	return matrix

def sumMatrix(a, b):
	matrix = []
	for i in range(len(a)):
		matrix.append([])
		for j in range(len(a[i])):
			matrix[i].append(a[i][j] + b[i][j])
	return matrix


A, B = createMatrix(4, 3), createMatrix(4, 3)
print(A)
print(B)
print('sum:')
print(sumMatrix(A, B))