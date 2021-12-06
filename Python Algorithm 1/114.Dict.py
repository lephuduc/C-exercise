try:
    n=int(input())
    if n>0:
        dic=dict()
        for i in range(n):
            dic[i]=i*i
        print(dic)
    else:
        print("Vui long nhap so nguyen duong!")
except:
    print("Dinh dang khong hop le")


