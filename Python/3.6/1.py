N, arr = int(input("N: ")), []
for i in range(N):
  arr.append(int(input(f'N[{i}]: ')))

count = 0
for i in arr:
  if i == 0: count += 1

print("Result:", count)
