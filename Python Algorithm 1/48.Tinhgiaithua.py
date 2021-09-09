def giaithua(n):
    if n==0:
        return 1
    else:
        return giaithua(n-1)*n
try:
    n=int(input("Nhập số tự nhiên: "))
    if n>0:
        print(giaithua(n))
    else:
        print("Vui lòng nhấp số tự nhiên")
except:
    print("Định dạng đầu vào không hợp lệ!")