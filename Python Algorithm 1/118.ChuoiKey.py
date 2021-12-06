def chuoiKey(dic):
    ls=[]
    sum=0
    for k,v in dic.items():
        ls.append(k)
        sum+=v
    s="-".join(ls)
    return s,sum
try:
    list_key=input().split()
    list_value=list(map(int,input().split()))
except:
    print("Vui long nhap value la so nguyen")
if len(list_key)==len(list_value):
    dic=dict()
    for i in range(len(list_key)):
        dic[list_key[i]]=list_value[i]
    s,sum=chuoiKey(dic)
    print(dic)
    print(s)
    print(sum)
else:
    print("Vui long nhap day bang nhau")