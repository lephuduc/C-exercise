try:
    n=int(input("Nhập n: "))
    def fact(n):
        fact=1;
        if n==0:
            return 1
        for i in range(1,n+1):
            fact*=i
        return fact
    if n>=0:
        print(f"Giai thua la {fact(n)}")
    else:
        print("Vui lòng nhập số nguyên dương")
except:
    print("Định dạng đầu vào không hợp lệ!")