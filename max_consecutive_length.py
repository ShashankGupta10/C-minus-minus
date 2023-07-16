arr = [3, 7, 1, 2, 6, 8]
num_set = set(arr)
current_streak = 0
longest_streak = 0

for i in range(0, len(num_set)):
    if i == 0:
        current_streak = 1
    else:
        if num_set[i] - 1 == num_set[i - 1]:
            current_streak = current_streak + 1
            print(current_streak)
            if current_streak > longest_streak:
                longest_streak = current_streak
                current_streak = 0

        else:
            if current_streak > longest_streak:
                longest_streak = current_streak
                current_streak = 0

print(longest_streak)
