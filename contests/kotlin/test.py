# Read the number of test cases
t = int(input())

for _ in range(t):
  s = input()
  
  i = len(s) - 1
  
  while i >= 0 and not s[i].isalpha():
    i -= 1
  
  letra = s[0]
  
  if len(s) == 2 and s[0].isdigit():
    print(s[:-1])
  else:
    print(s[:i+2])
