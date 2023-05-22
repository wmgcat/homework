import collections

pets = {}

def get_pet(ID):
  return pets[ID] if ID in pets.keys() else False

def get_suffix(value):
  post = 'лет'
  if value <= 4 or value >= 21:
    i = value % 10
    if i == 1: post = 'год'
    elif i < 5: post = 'года'
  return f'{value} {post}'

def create():
  try:
    last = collections.deque(pets, maxlen=1)[0]
  except:
    last = 0
  
  pets[last + 1] = update()
  print(f'{last + 1} запись создана!')

def read(name, obj):
  str = ""

  for key, value in obj.items():
    nstr = f'{key}: {value}. '
    if key == 'Вид питомца':
      nstr = f'Это {value} по кличке "{name}". '
    elif key == 'Возраст питомца':
      nstr = f'{key}: {get_suffix(value)}. '
    str += nstr
  print(str)

def update():
  name, view, old, owner = input("Имя питомца: "), input("Вид питомца: "), int(input("Возраст: ")), input("Владелец: ")
  while old <= 0:
    print("Возраст не может быть меньше 1 года!")
    old = int(input("Возраст: "))

  obj = {}
  obj[name] = {
    "Вид питомца": view,
    "Возраст питомца": old,
    "Имя владельца": owner
  }
  return obj

def delete(ID):
  pet = get_pet(ID)
  if pet:
    del pets[ID]
    print('запись удалена!')
  else: print('Питомца с таким ID не существует!')

def pets_list():
  print('список всех питомцев:')

  for key in pets:
    pet = get_pet(key)
    print(f'[ID: {key}]: ', end='')
    if pet:
      name = list(pet.keys())[0]
      read(name, pet[name])

command = ''
while command != 'stop':
  command = input('> ')
  if command == 'create':
    create()
  elif command == 'list':
    pets_list()
  elif command == 'get':
    pet = get_pet(int(input('ID: ')))
    if pet:
      name = list(pet.keys())[0]
      read(name, pet[name])
    else: print('питомца с таким ID не существует!')
  elif command == 'update':
    id = int(input('ID: '))
    pet = get_pet(id)
    if pet:
      name = list(pet.keys())[0]
      pets[id] = update()
    else: print('питомца с таким ID не существует!')
  elif command == 'delete':
    id = int(input('ID: '))
    delete(id)
