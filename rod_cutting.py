def rodCut(price, N):
    dp={}
    def solve(rl, cl):
        if cl == 0 or rl == 0:
            return 0
        elif (cl, rl) in dp:
            return dp[(cl, rl)]
        else:
            print(cl)
            val = price[cl-1]
            if cl<=rl:
                c1 = val + solve(rl-cl, cl)
                c2 = solve(rl, cl-1)
                c= max(c1, c2)

            else:
                c= solve(cl-1, rl)
            dp[(cl, rl)] = c
        return c
    return solve(N, N)

print(rodCut([1, 4, 5, 6, 8, 9, 12], 164))