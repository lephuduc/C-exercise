
def Nhap_dict(key,val):
    dic = dict()
    for i in range(len(key)):
        dic[key[i]] = val[i]
    return dic

def update_dic(dic1,dic2):
    if len(dic1)>len(dic2):
        dic1.update(dic2)
        return dic1
    dic2.update(dic1)
    return dic2

ls_key_1=input().split()
ls_value_1=input().split()
ls_key_2=input().split()
ls_value_2=input().split()

if len(ls_key_1)!=len(ls_value_1) and len(ls_key_2)!=len(ls_value_2):
    print("Vui long nhap so luong key va value bang nhau")
else:
    dic1=Nhap_dict(ls_key_1,ls_value_1)
    dic2=Nhap_dict(ls_key_2,ls_value_2)
    print(update_dic(dic1,dic2))
