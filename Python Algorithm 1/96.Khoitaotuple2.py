
def tuple_natural2(n):
    Tuple=(n,tuple(n for i in range(n)))
    print(Tuple)
try:
    n=int(input())
    if n>0:
        tuple_natural2(n)
    else:
        print("Vui long nhap so nguyen duong")
except:
    print("Dinh dang dau vao khong hop le!")