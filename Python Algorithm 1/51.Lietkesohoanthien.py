def KTSohoanthien(n):
    sum=0
    for i in range(1,n):
        if n%i==0:
            sum+=i
    if sum==n:
        return True
    else:
        return False
try:
    n = int(input("Nhập n: "))
    if n>0:
        for i in range(1,n):
            if KTSohoanthien(i):
                print(i,end=" ")
    else:
        print("Vui lòng nhấp số nguyên dương!")
except:
    print("Bạn nhập sai định dạng!")