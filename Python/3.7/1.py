str, is_true = input("string: "), True
rstr = str[::-1]

for i in range(len(rstr)):
  if rstr[i] != str[i]:
    is_true = False
    break

if is_true: print("yes")
else: print("no")

