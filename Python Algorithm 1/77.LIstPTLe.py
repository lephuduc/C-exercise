def list_odd_number(s):
    result =[]
    if list_number==[]:
        return "Danh sach rong"
    else:
        for num in list_number:
            if num%2!=0:
                result.append(str(num))
        return " ".join(result)
if __name__ == "__main__":
    try:
        list_number=list(map(int,input().split()))
        if list_number==[]:
            print("Danh sach rong")
        else:
            print(list_odd_number(list_number))
    except:
        print("Vui long nhap so nguyen")
