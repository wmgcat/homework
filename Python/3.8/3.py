M = int(input("M: "))
if M < 0 or M > 10**6:
  print("M < 0 or M > 10e6")
  exit()

MAX = 2
N, persons = int(input("N: ")), []
if N < 0 or N > 100:
  print("N < 0 or N > 100")
  exit()

for i in range(N):
  X = int(input(f'{i + 1} person M: '))
  if X < 0 or X > M:
    print(f'{i + 1} person M < 0 or > {M}')
    exit()
  persons.append(X)

persons.sort() 


i, result = 0, 0
while i < len(persons):
  if persons[i] < M:
    if i + 1 < len(persons) and persons[i] + persons[i + 1] <= M:
      print(f'{result + 1}: elem: [{i}, {i + 1}] {persons[i]}+{persons[i + 1]}={persons[i] + persons[i + 1]}')
      result += 1
      i += 2
    else:
      print(f'{result + 1}: elem: {i} {persons[i]}')
      result += 1
      i += 1
  """
  if count < MAX and (mass + persons[i]) >= M:
    result += 1
    count = 0
    mass = 0
  mass += persons[i]
  count += 1
  if count >= MAX or mass >= M:
    result += 1
    count = 0
    mass = 0
  """

print("Result: ", result)