current = input("number: ")

def getResult(number):
  if (len(number) < 5):
    return false
  return (pow(int(number[-2]), int(number[-1])) * int(number[-3])) / (int(number[0]) - int(number[1]))

print("Result:", getResult(current))
