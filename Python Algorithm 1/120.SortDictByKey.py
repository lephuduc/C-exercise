def NhapDict(list_key,list_value):
    dic=dict()
    # nhap dic
    for i in range(len(list_key)):
        dic[list_key[i]]=list_value[i]
    return dic
def sort_by_key(dic):
    result=dict()
    list_key=sorted(dic.keys())
    for key in list_key:
        result[key]=dic[key]
    return result

try:
    list_key=list(map(int,input().split()))
    list_value=input().split()
    if len(list_key)==len(list_value):
        dic=NhapDict(list_key,list_value)
        print(sort_by_key(dic))
    else:
        print("Vui long nhap 2 danh sach bang nhau")
except:
    print("Vui long nhap key la so nguyen")



