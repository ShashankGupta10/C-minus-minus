def memory_division(N, A, B, C):
    if A < 1 or A > 4000 or B < 1 or C < 1 or B > 4000 or C > 4000 or N < 1 or N > 4000:
        return 'Invalid input. Please enter numbers between 1 and 4000.'
    else:
        if A > B and A > C:
            if C <= B:
                order = [C, B, A]
            else:
                order = [B, C, A]
        elif B > A and B > C:
            if A <= C:
                order = [C, A, B]
            else:
                order = [A, C, B]
        elif C > A and C > B:
            if A <= B:
                order = [B, A, C]
            else:
                order = [A, B, C]
        elif A == B and A == C:
            order = [A, B, C]
        elif A == B:
            if A > C:
                order = [C, B, A]
            else:
                order = [A, B, C]

        def helper(curr_count, left_over, order):
            if left_over == 0:
                return curr_count
            elif len(order) == 0 or left_over < 0:
                return -1
            largest = left_over // order[0]
            for i in range(largest, -1, -1):
                res = helper(curr_count + i, left_over - (i * order[0]), order[1:])
                if res != -1 and res is not None:
                    return res

        return helper(0, N, order)

N = int(input("Enter the size of the memory block: "))
A = int(input("Enter the first block size (A): "))
B = int(input("Enter the second block size (B): "))
C = int(input("Enter the third block size (C): "))

output = memory_division(N, A, B, C)
print("The maximum number of memory divisions with no leftover space:", output)
