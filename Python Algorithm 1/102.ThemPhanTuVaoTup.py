def them_phan_tu(tupX,tupY,k):
    headX=tupX[:k]
    endX=tupX[k:]
    return headX+tupY+endX
try:
    tupX=tuple(input().split())
    tupY=tuple(input().split())
    k=int(input())
    if k>0:
        print(them_phan_tu(tupX,tupY,k))
    else:
        print("Vui long nhap so nguyen duong")
except:
    print("Dinh dang dau vao khong hop le!")
