def phan_tu_lon_nhat(ls):
    max=ls[0]
    index=0
    ls_index=[]
    for i  in range(len(ls)):
        if ls[i]>max:
            max=ls[i]
            index=i
    for i in range(len(ls)):
        if ls[i]==max:
            ls_index.append(i)
    print(max)
    print(ls.count(ls[index]))
    print(*ls_index)
try:
    s=input()
    ls=list(map(float,s.split()))
    if ls==[]:
        print("Danh sach rong")
    else:
        phan_tu_lon_nhat(ls)
except :
    print('Dinh dang dau vao khong hop le!')