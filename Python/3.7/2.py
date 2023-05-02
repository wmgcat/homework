str = input("str: ")
if len(str) <= 1000:
  while str.find('  ') != -1:
    str = str.replace('  ', ' ')
  print("Result:", str)
else: print("len > 1000")
