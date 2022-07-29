import sys
# from functools import lru_cache
# @lru_cache(maxsize=None)

def _input():
    return sys.stdin.readline().strip()

def solve(n,a,b,c):
    if n==1:
        print(a,c)
        return
    solve(n-1,a,c,b)
    solve(1,a,b,c)
    solve(n-1,b,a,c)

n = int(_input())
print((1<<n) - 1)
solve(n,1,2,3)