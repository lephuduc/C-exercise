def sort_float(ls):
    for i in range(len(ls)):
        for j in range(len(ls)):
            if ls[i]<ls[j]:
                tmp=ls[i]
                ls[i]=ls[j]
                ls[j]=tmp
    return ls
try:
    ls=list(map(float,input().split()))
    if ls==[]:
        print("Danh sach rong")
    else:
        print(*sort_float(ls))
except:
    print("Vui long nhap so thuc!")