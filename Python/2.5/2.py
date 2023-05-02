def checkChars(word):
  nword = word.replace(' ', '')
  arr = {}
  for i in range(len(nword)):
    if not (nword[i] in arr): arr[nword[i]] = 1
    else: arr[nword[i]] += 1
  return arr

arr = checkChars(input("word: "))
print("result:")
for key in arr:
  print(f'{key}: {arr[key]}')
