x = int(input('X: '))
a = int(input('Mike: '))
b = int(input('Ivan: '))

def check(x, a, b):
  if a >= x and b < x: return 'Mike'
  if b >= x and a < x: return 'Ivan'
  if a + b >= x and a < x and b < x: return 1
  if a >= x and b >= x: return 2
  return 0

print('Result:', check(x, a, b))

