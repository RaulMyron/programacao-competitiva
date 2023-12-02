n = int(input())

for i in range(n):
    input()
    qtd = sorted(list(map(int, input().split())))
    total = 0
    diff = []
    mini = qtd[0]
    for i in range(1,len(qtd)):
        diff.append(qtd[i]-mini)

    print(sum(diff))


    