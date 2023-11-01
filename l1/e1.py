def sort_pela_primeira(list1):
  seen = {}

  for element in list1:
    if element not in seen:
      seen[element] = True

  keys = list(seen.keys())

  keys.sort()

  sorted_list = []
  for key in keys:
    sorted_list.append(key)

  return sorted_list

n = int(input())

vector = list(map(int, input().split()))
vector_1 = sorted(vector[:])

vector = sort_pela_primeira(vector)

dias = 0
dias_1 = 0
last = 0

feita = []

""" print(vector)
print(vector_1)
 """
contador_dia = 1

for i in range(len(vector_1)):
    if vector_1[i] >= contador_dia:
        contador_dia+=1

print((contador_dia-1))

