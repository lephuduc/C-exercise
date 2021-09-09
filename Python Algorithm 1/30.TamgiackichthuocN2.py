try:
    n=int(input("Nhập n: "))
    if 1<=n<=9:
        for i in range(n,0,-1):
            for m in range(i,0,-1):
                print(m,end=" ")
            print("")
    else:
        print("Vui lòng nhập từ 1 tới 9!")
except:
    print("Định dạng đầu vào không hợp lệ")