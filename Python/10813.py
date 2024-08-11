# https://www.acmicpc.net/problem/10813

n, m = map(int, input().split())

N = [i + 1 for i in range(n)]

for k in range(m):
    i, j = map(int, input().split())
    i -= 1
    j -= 1
    N[i], N[j] = N[j], N[i]
    
print(*N)