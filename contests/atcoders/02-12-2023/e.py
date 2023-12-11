def max_food_weight(N, weights):
    # Step 1: Sort the array in descending order
    weights.sort(reverse=False)

    # Step 2: Initialize variables
    total_weight = 0

    # Step 3: Apply the magic
    for i in range(N):
        # Double the weight of the current dish
        doubled_weight = weights[i] * 2

        # Check if there's a next dish to divide its weight
        if i < N - 1:
            # Divide the weight of the next dish, rounding down
            divided_weight = weights[i + 1] // 2

            # Choose the maximum between doubling and dividing
            total_weight += max(doubled_weight, divided_weight)
        else:
            # If it's the last dish, only double its weight
            total_weight += doubled_weight

    return total_weight

# Input
N = 5
weights = [1, 5, 2, 4, 3]

# Output
result = max_food_weight(N, weights)
print(result)
