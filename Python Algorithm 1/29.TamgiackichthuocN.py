try:
    n=int(input("Nhập n: "))
    if 1<=n<=9:
        for i in range(1,n+1):
            for m in range(1,i+1):
                print(m,end = " ")
            print("")
    else:
        print("Vui lòng nhập từ 1 tới 9!")
except:
    print("Định dạng đầu vào không hợp lệ")