def nhan_ban_ds(n,ls):
    number=(n//len(ls))+1
    newLs=ls*number
    result=newLs[:n]
    return result
try:
    ls=list(input().split())
    n=int(input())
    if ls==[]:
        print("Danh sach rong")
    else:
        print(*nhan_ban_ds(n,ls))
except:
    print("Vui long nhap so nguyen!")