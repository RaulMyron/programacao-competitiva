a = input()
a = a.lstrip(".").split("r")

contador = 0

for sapo in a:
    if "s" not in sapo:
        contador+=sapo.count(".")

print(contador)