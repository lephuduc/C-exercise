def sum(n):
    sum_chan,sum_le=0,0
    while n>0:
        nDu=n%10
        n=n//10
        if nDu%2==0:
            sum_chan+=nDu
        else:
            sum_le+=nDu
    return sum_chan,sum_le #trả về tuple
try:
    number = int(input("Nhập số tự nhiên: "))
    if number>0:
        tongchan,tongle=sum(number)
        print(f"Tổng chẳn là: {tongchan}")
        print(f"Tổng lẻ là: {tongle}")
    else:
        print("Vui lòng nhấp số tự nhiên")
except:
    print("Định dạng đầu vào không hợp lệ!")