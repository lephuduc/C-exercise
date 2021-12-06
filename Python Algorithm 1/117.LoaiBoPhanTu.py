
def loaiBoPhanTu(list_key,list_value):
    dic=dict()
    for i in range(len(list_key)):
        #kiem tra xem value ton tai chua
        f=True
        for key,value in dic.items():
            if list_value[i]==value:
                f= False
                break
        if f:
            dic[list_key[i]]=list_value[i]
    return dic

list_key=input().split()
list_value=input().split()
if len(list_key)==len(list_value):
    print(loaiBoPhanTu(list_key,list_value))
else:
    print("Vui long nhap day bang nhau")

