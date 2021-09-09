try:
    a,b=map(int,input("Nhập a và b: ").split())
    if b>=a:
        i=a;
        sum=0;
        while i<=b:
            sum+=i
            i+=1
        print(f"Tổng số nguyên từ a đến b là: {sum}")
    else: 
        print(f"b phải lớn hơn a! ")
except:
    print("Định dạng đầu vào không hợp lệ")