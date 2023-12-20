def find_first_occurrence(blocks, queries):
    blocks.sort()
    positions = []
    for query in queries:
        left = 0
        right = len(blocks) - 1
        while left <= right:
            mid = (left + right) // 2
            if blocks[mid] == query:
                positions.append(mid + 1)
                break
            elif blocks[mid] < query:
                left = mid + 1
            else:
                right = mid - 1
        else:
            positions.append(-1)
    return positions


def main():
    n, m = map(int, input().split())
    blocks = list(map(int, input().split()))
    queries = list(map(int, input().split()))
    positions = find_first_occurrence(blocks, queries)
    for position in positions:
        print(position)


if __name__ == "__main__":
    main()
