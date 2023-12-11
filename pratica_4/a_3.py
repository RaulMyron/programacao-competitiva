from collections import defaultdict

def dfs(substring, visited):

    visited.add(substring)

    for i in range(len(substring)):
        # Check for redundant substrings
        if new_substring != substring:
            # Add all possible suffixes after the current character
            for j in range(i + 1, len(substring) + 1):
                new_substring = substring[:i] + substring[i:j]
                if new_substring not in visited:
                    dfs(new_substring, visited)

        # Check for unique prefixes
        if new_substring != substring[::-1]:
            # Add all possible prefixes before the current character
            for j in range(i + 1):
                new_substring = string[j:i] + string[i]
                if new_substring not in visited:
                    dfs(new_substring, visited)

string = input()
visited = set()

for i in range(len(string)):
    dfs(string[i], visited)

# Print the visited substrings in sorted order
for substring in sorted(visited):
    print(substring)
