def tonguoc(n):
        sum=0
        for i in range(1,n):
            if n%i == 0:
                sum+=i
        return sum
try:
    number = int(input("Nhập số nguyên dương: "))
    if number>0:
        if tonguoc(number)==number:
            print("Là số hoàn thiện")
        else:
            print("Không phải số hoàn thiện")
    else:
        print("Vui lòng nhập số nguyên dương!")
except:
    print("Định dạng không hợp lệ!")