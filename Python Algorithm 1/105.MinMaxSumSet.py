def sum_set(set_):
    return sum(set_)
def max_set(set_):
    return max(set_)
def min_set(set_):
    return min(set_)

try:
    set_=set(map(float,input().split()))
    #khoong the tao set rong ma phai dung constructor
    if set_==set():
        print("Danh sach rong")
    else:
        print(max_set( set_))
        print(min_set( set_))
        print(sum_set( set_))
except:
    print("Dinh dang dau vao khong hop le")

