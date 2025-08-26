n, m, a = map(int, input().split())
 
tiles_along_n = (n + a - 1) // a
tiles_along_m = (m + a - 1) // a
 
print(tiles_along_n * tiles_along_m)