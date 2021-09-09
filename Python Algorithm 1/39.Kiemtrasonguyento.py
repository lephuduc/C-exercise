try:
    number = int(input("Nhập số tự nhiên: "))
    def KTSNT(n):
        count=0
        for i in range(1,n//2+1):
            if n%i==0:
                count+=1
        if count==1:
            return True
        else:
            return False
    if number > 0:
        if KTSNT(number):
            print("Là số nguyên tố")
        else:
            print("Không phải số nguyên tố")
    else:
        print("Vui lòng nhập sốt tự nhiên!")
except:
    print("Định dạng đầu vào không hợp lệ!")
    