pets = {}

def setNewPet():
  name, view, old, owner = input("Имя питомца: "), input("Вид питомца: "), int(input("Возраст: ")), input("Владелец: ")
  while old <= 0:
    print("Возраст не может быть меньше 1 года!")
    old = int(input("Возраст: "))
  pets[name] = {
    "Вид питомца": view,
    "Возраст питомца": old,
    "Имя владельца": owner
  }
  return name

def getPet(name):
  if name in pets:
    str = ""
    for key, value in pets[name].items():
      nstr = f'{key}: {value}. '
      if key == 'Вид питомца':
        nstr = f'Это {value} по кличке "{name}". '
      elif key == 'Возраст питомца':
        post = 'лет'
        if value <= 4 or value >= 21:
          i = value % 10
          if i == 1: post = 'год'
          elif i < 5: post = 'года'
        nstr = f'{key}: {value} {post}. '
      str += nstr
    print(str)
  return False

getPet(setNewPet())

