n = int(input())

for i in range(n):
    pessoas = list(map(int, input().split()))
    pessoas_sorted = sorted(pessoas, reverse=True)
    #print(pessoas_sorted)
    print(pessoas_sorted.index(pessoas[0]))
