id = input()
username = ""
has_letter = False

for c in reversed(id):
    if c.isdigit():
      username += c
    else:
      has_letter = True
      break

print(username)