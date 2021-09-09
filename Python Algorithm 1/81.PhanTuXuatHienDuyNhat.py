def only(ls):
    result=[]
    for e in ls:
        if ls.count(e)==1:
            result.append(e)
    return result
try:
    ls=list(input().split())
    if ls==[]:
        print("Danh sach rong")
    else:
        print(*only(ls))
except:
    print("Vui long nhap so nguyen!")