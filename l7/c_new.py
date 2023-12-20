N = int(input())
entrada = [int(x) for x in input().split()]

count = sum(1 if entrada[i] > entrada[j] else 0 for i in range(N) for j in range(i + 1, N))

print("Carlos" if count % 2 == 0 else "Marcelo")
