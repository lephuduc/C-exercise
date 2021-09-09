def fibonacci_dequy(n):
    if n==1 or n==2:
        return 1
    return fibonacci_dequy(n-1)+fibonacci_dequy(n-2)
def fibonacci_for(n):
    so1,so2=0,1
    for i in range(n):
        sum=so1+so2
        so1=so2
        so2=sum
    return so1
try:
    n = int(input("Nhập vị trí của số: "))
    if n>0:
        print(fibonacci_for(n))
    else:
        print("Vui lòng nhấp số tự nhiên")
except:
    print("Định dạng đầu vào không hợp lệ!")