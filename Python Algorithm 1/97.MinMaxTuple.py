
def min_max_length(tup):
    print(min(tup))
    print(max(tup))
    print(len(tup))
try:
    tup=tuple(map(float,input().split()))
    min_max_length(tup)
except:
    print("Vui long nhap so thuc!")