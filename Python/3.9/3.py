check = set()
arr = list(map(lambda x: int(x), input("NUMBERS: ").split(' ')))

for key in arr:
  is_yes = 'False'
  if not (key in check):
    check.add(key)
  else: is_yes = 'True'
  print(key, "Repeat: ", is_yes)
