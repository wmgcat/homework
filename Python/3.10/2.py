

my_dict = dict()

start, end = 10, -5
step = end - start
if step < 0: step = -1
else: step = 1

for i in range(start, end + step, step):
  my_dict[i] = i ** i

print(my_dict)
