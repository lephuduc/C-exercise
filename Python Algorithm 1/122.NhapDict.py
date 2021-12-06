def nhap_dict(s,list_key,list_value):
    dic=dict()
    ls=s.split()
    for j in range(len(list_key)):
        dic[list_key[j]]=list_value[j]
    for i in range(len(ls)):
        for key,value in dic.items():
            if ls[i]==key:
                ls[i] = value
    return  dic," ".join(ls)

s=input()
list_key=input().split()
list_value=input().split()

if len(list_key)==len(list_value):
    dic,string=nhap_dict(s,list_key,list_value)
    print(dic)
    print(string)
else:
    print("Vui long nhap 2 danh sach bang nhau")
