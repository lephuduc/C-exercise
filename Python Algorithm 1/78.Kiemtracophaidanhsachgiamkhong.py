def is_decreasing(list_number):
    for i in range(1,len(list_number)):
        if (list_number[i]>list_number[i-1]):
            return False
    return True
try:
    list_number=list(map(int,input().split()))
    if list_number==[]:
        print("Danh sach rong")
    else:
        print(is_decreasing(list_number))
except:
    print("Vui long nhap so nguyen")


    