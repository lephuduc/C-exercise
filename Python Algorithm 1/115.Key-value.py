
ls1=input().split()
ls2=input().split()
dic=dict()
if len(ls1)==len(ls2):
    for i in range(len(ls1)):
        dic[ls1[i]]=ls2[i]
    print(dic)
    for key,val in dic.items():
        print(f"%s: %s" % (key, val))
else:
    print("vui long nhap 2 danh sach bang nhau")

