try:
    a,b=map(int,input("Nhập a và b: ").split())
    def KTSNT(n):
        count=0
        for i in range(1,n//2+1):
            if n%i==0:
                count+=1
        if count==1:
            return True
        else:
            return False
    for i in range(a,b+1):
        if KTSNT(i):
            print(i)
except:
    print("Định dạng đầu vào không hợp lệ!")
