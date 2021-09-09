try:
    number = int(input("Nhập số tự nhiên: "))
    if (number>=0):
        for i in range(1,number+1):
            if (number%i==0):
                print(i,end=" ")
    else:
        print("Vui lòng nhập số tự nhiên:! ")
except:
    print("Định dạng không hợp lệ!")