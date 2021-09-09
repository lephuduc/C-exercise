try:
    n=int(input("Nhập n (1<=n<=9) : "))
    if 1<=n<=9:
        i=1
        while i<=9:
            print(f"{n} x {i} = {i*n}")
            i+=1
    else:
        print("n phải 1<=n<=9 ")
except:
    print("Đầu vào không hợp lệ! ")