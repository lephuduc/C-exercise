try:
    def fact(n):
        if n==0:
            return 1
        else:
            fact=1
            for i in range(1,n+1):
                fact*=i
            return fact
    def sum(n,x):
        sum=0
        for i in range(0,2*n+1):
            if i%2==0:
                sum+=(x**i)/fact(i)
            else:
                sum-=(x**i)/fact(i)
        return sum
    print("S(n) = 1 - x + x^2/2! - x^3/3! + … - x^(2n-1)/(2n-1)! + x^(2n)/(2n)!")
    x=float(input("Nhap so thuc x: "))
    n=int(input("Nhap so tu nhien n: "))
    if n>=0:
        print(round(sum(n,x),5))
    else:
        print("Vui lòng nhập n lớn hơn 0 ")
except:
    print("Định dạng đầu vào không hợp lệ! ")