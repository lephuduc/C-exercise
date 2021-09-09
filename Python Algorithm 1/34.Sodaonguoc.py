
def count(n):
    count=0
    while n>0:
        n=n//10
        count+=1
    return count
try:
    number=int(input("Nhap so tu nhien n: "))
    if number<=0:
        print("Vui lòng nhập n là số tự nhiên!")
    else:
        rnumber=0
        nDu=0
        
        #cách 1
        # while number>0:
        #     i=count(number)-1
        #     nDu=number%10
        #     rnumber+=nDu*(10**i)
        #     number=number//10
        #     i-=1

        #cách 2:
        while number>0:
            nDu=number%10
            rnumber=rnumber*10+nDu
            number=number//10
        else:
            print(rnumber)
except:
    print("Định dạng đầu vào không hợp lệ!")


