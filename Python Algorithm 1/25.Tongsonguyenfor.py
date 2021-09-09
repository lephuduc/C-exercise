try:
    a,b=map(int,input("Nhập a và b: ").split())
    if b>=a:
        ls = list(i for i in range(a,b+1))
        sum=0
        for i in ls:
            sum+=i
        print(f"Tổng số nguyên từ a đến b là: {sum}")
    else: 
        print(f"b phải lớn hơn a! ")
except:
    print("Định dạng đầu vào không hợp lệ")