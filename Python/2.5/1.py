number = int(input("number: "))

def getStatus(numb):
  str = '';
  if numb % 2 == 0:
    if numb < 0: str = 'Отрицательное четное число'
    else: str = 'Положительное четное число'
  else:
    if numb == 0: str = 'Нулевое число'
    else:
      if numb < 0: str = 'Отрицательное нечетное число'
      else: str = 'Положительное нечетное число'
  return str

print("Result:", getStatus(number))

