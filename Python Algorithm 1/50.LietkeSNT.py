def KTSNT(n):
    count=0
    for i in range(1,n+1):
        if n%i==0:
            count+=1
    if count==2:
        return True
    else:
        return False
try:
    a=int(input("Nhập a: "))
    b=int(input("Nhập b: "))
    if a<0 or b<0:
        print("Vui lòng nhập số tự nhiên!")
    elif a<=b:
        amout=0
        for i in range(a,b+1):
            if KTSNT(i):
                print(i)
                amout+=1
        if amout==0:
            print("Không có số nguyên tố nào trong đoạn (a;b)!")
    else:
        print("a lớn hơn b rồi!")
except:
    print("Vui lòng nhập đúng định dạng!")

