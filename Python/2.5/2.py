word = input("word: ")

def checkChar(word, char):
  count = 0
  for i in range(len(word)):
    if word[i] == char:
      count = count + 1
  return count

def checkArrayChars(word, arr):
  for i in range(len(arr)):
    count = checkChar(word, arr[i])
    if count > 0: print(f'char "{arr[i]}: {str(count)}')

checkArrayChars(word, ['a', 'e', 'i', 'o', 'u'])