t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    total = sum(arr)

    liar = False 
    for j in range(n-1):
        if(arr[j] == 0 and arr[j+1] == 0):
            liar = True 
            break 
    
    if(total > n-1):
        liar = True
    
    if liar:
        print("YES")
    else:
        print("NO")