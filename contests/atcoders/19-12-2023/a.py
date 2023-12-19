t = int(input())

for _ in range(t):
    
    input()
    entrada = input()
    ans = 0

    res = [0] * 26

    for char in entrada:
        i = ord(char) - 65
        res[i] += 1

    for i in range(26):
        if res[i] >= i + 1:
            ans += 1

    print(ans)
