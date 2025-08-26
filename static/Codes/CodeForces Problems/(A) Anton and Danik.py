def determine_winner(n, s):
    anton_wins = s.count('A')
    danik_wins = s.count('D')
    
    if anton_wins > danik_wins:
        return "Anton"
    elif anton_wins < danik_wins:
        return "Danik"
    else:
        return "Friendship"
 
n = int(input())
s = input().strip()
 
print(determine_winner(n, s))