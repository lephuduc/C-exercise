def sort_tup(tup):
    return tuple(sorted(tup,reverse=True))

try:
    tup=tuple(map(float,input().split()))
    print(sort_tup(tup))
except:
    print("Dinh dang dau vao khong hop le!")