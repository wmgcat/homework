N = set(list(map(lambda x: int(x), input("N: ").split(' '))))
M = set(list(map(lambda x: int(x), input("M: ").split(' '))))

count = 0
for i in N:
  for j in M:
    if i == j:
      count += 1
      break

print("Result: ", count)

