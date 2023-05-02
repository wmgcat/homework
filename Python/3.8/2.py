while True:
  N, nArr = int(input("N: ")), []
  is_break = False
  if N < 1 or N > 100000: continue
  for i in range(N):
    X = int(input(f'{i + 1} number: '))
    if X < 1 or X > 10**9:
      is_break = True
      break
    nArr.append(X)
  if is_break: continue
  nArr.insert(0, nArr.pop())
  
  print("Result:")
  for i in range(len(nArr)):
    print(nArr[i])
  break
