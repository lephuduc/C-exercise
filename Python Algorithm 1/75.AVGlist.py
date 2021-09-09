def AVG(s):
    try:
        list_number=list(map(float,s.split()))
        if list_number==[]:
            print("Danh sach rong")
        else:
            print(sum(list_number)/len(list_number))
    except:
        print("Vui long nhap phan tu la so thuc!")
s=input()
AVG(s)