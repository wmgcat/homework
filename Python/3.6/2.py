X, count = int(input("X: ")), 2
for i in range(2, int(X / 2) + 1):
  if X % i == 0: count += 1

print("Result: ", count)
