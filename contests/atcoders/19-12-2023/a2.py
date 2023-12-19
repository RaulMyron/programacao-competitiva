from collections import Counter

alfab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

t = int(input())

for _ in range(t):
    input()
    log = input()
    freq = Counter(log)

    #print(freq)

    solved = [char for char in alfab if freq[char] >= alfab.index(char) + 1]

    print(len(solved))
