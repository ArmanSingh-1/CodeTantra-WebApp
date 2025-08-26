import math
 
t = int(input())
for _ in range(t):
    s = input().strip()
    n = int(s)
    root = int(math.isqrt(n)) 
 
    if((root * root) != n):
        print(-1)
        continue
 
    found = False
    for a in range(0, root + 1):
        b = root - a
        if((0 <= a <= 99) and (0 <= b <= 99)):
            print(f"{a} {b}")
            found = True
            break
 
    if not found:
        print(-1)