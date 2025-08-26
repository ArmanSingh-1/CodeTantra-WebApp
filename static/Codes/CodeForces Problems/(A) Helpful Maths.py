def helpful_maths(s):
    numbers = sorted(s.replace('+', ''))
    return '+'.join(numbers)
 
s = input().strip()
print(helpful_maths(s))