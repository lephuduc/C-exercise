def NhapDict(list_key,list_value):
    dic=dict()
    # nhap dic
    for i in range(len(list_key)):
        dic[list_key[i]]=list_value[i]
    return dic

def sort_by_value(dic):
    result=dict()
    items = dic.items()
    items_sorted=sorted(items)
    for key,value in items_sorted:
        result[key]=value
    return result
try:
    list_key=input().split()
    list_value=list(map(int,input().split()))
    if len(list_key)==len(list_value):
        dic=NhapDict(list_key,list_value)
        print(sort_by_value(dic))
    else:
        print("Vui long nhap 2 danh sach bang nhau")
except:
    print("Vui long nhap value la so nguyen")
