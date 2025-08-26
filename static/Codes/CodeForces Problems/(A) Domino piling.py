def max_dominoes(m, n):
    return (m * n) // 2
 
m, n = map(int, input().split())
print(max_dominoes(m, n))