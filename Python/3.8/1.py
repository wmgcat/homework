N = int(input("N: "))
Narr = []

for i in range(N):
  while True:
    nX = int(input(f'{i + 1} number: '))
    if nX >= 1 and nX <= 10000:
      Narr.append(nX)
      break

Narr = Narr[::-1]
print("Result:")
for i in range(len(Narr)):
  print(f'{Narr[i]}')
