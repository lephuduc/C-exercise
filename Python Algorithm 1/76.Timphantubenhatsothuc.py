def min_float(list_number):
    min=list_number[0]
    for number in list_number:
        if number<min:
            min =number
    return min
if __name__=='__main__':
    try:
        list_number=list(map(float,input().split()))
        if list_number==[]:
            print("Danh sach rong")
        else:
            print(min_float(list_number))
    except:
        print("Vui long nhap phan tu la so thuc!")
    
