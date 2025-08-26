def is_reverse(s, t):
    if s == t[::-1]:
        return "YES"
    else:
        return "NO"
 
s = input().strip()
t = input().strip()
 
print(is_reverse(s, t))