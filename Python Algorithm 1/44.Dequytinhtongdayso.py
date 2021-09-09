try:
    n=int(input("Nhập số lượng phần tử cần tính: "))
    def tinhtong(n):
        if n:
            return n+tinhtong(n-1)
        else:
            return 0
    if n>=0:
        print("Tổng là:",end=" ")
        print(tinhtong(n))
    else:
        print("Vui lòng nhập số tự nhiên!")
except:
    print("Định dạng đầu vào không hợp lệ!")