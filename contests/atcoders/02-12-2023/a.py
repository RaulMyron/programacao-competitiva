def min_typos(N, K, T, A):
    A.sort()
    typos_to_correct = 0
    l = 0
    typo_counts = [0]*N
    for a in A:
        typo_counts[a-1] += 1
    for r in range(N):
        while sum(typo_counts[l:r+1]) > T:
            l += 1
        typos_to_correct = max(typos_to_correct, sum(typo_counts[l:r+1])-1)
    return typos_to_correct

n, k, t = 5, 4, 3
a = [1, 2, 4, 5]
print(min_typos(n, k, t, a))

n, k, t = 4, 8, 2
a = [1, 1, 1, 1, 1, 4, 2, 2]
print(min_typos(n, k, t, a))