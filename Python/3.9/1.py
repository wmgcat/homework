N = int(input("N: "))

if N < 1 or N > 100000:
  print("N < 1 or > 100000")
  exit()

NUMBERS = input("NUMBERS: ")
arr = []
if NUMBERS.find(' ') != -1: arr = NUMBERS.split(' ')
else: arr.append(NUMBERS)

if len(arr) != N:
  print(f'numbers > {N}')
  exit()

arr = set(list(map(lambda x: int(x), arr)))

for v in arr:
  if abs(v) > 2*10**9:
    print(f'{v} > 2*10e9')
    exit()

print("Result: ", len(arr))
