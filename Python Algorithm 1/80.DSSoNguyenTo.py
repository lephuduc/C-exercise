def is_prime(n):
    count = 0
    for i in range(1,n+1):
        if n%i==0:
            count += 1
    return count==2 
def list_prime(ls):
    result = []
    for e in ls:
        if  is_prime(e)==True and e>0:
            result.append(e)
    return result
try:
    ls=list(map(int,input().split()))
    if ls==[]:
        print("Danh sach rong")
    else:
        print(*list_prime(ls))
except:
    print("Vui long nhap so nguyen!")