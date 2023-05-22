
m = int(input("mass: "))
if m < 1 or m > 10**6:
  print('m < 1 or m > 10e6')
  exit()

n = int(input("count: "))
if n < 1 or n > 100:
  print('n < 1 or n > 100')
  exit()

weights = []

for i in range(n):
  weights.append(int(input(f'{i + 1} weight: ')))
weights.sort()

boats, left, right = 0, 0, n -1

while left <= right:
    if left == right:
        boats += 1
        break
    if weights[left] + weights[right] <= m:
        left += 1
    right -= 1
    boats += 1

print(f'result: {boats}');