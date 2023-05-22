N = int(input("N: "))

if N < 1 or N > 10000:
  print("N < 1 or N > 10000")
  exit()

Narr = []


for i in range(N):
  while True:
    nX = int(input(f'{i + 1} number: '))
    if abs(nX) <= 10**5:
      Narr.append(nX)
      break

Narr = Narr[::-1]
print("Result:")
for i in range(len(Narr)):
  print(f'{Narr[i]}')
