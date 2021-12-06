def sum_elements(tup):
    result=[]
    for i in range(len(tup)):
        sum=0
        for e in tup[i]:
            sum+=e
        result.append(sum)
    return tuple(result)
    #nhap tup
def get_element(n):
    tup=[]
    for i in range(n):
        tup.append(tuple(map(int,input().split())))
    return tuple(tup)
try:
    n=int(input())
    if n>=0:
        tup=get_element(n)
        tup_sum=sum_elements(tup)
        print(tup_sum)
    else:
        print("Vui long nhap so nguyen duong")
except:
    print("Dinh dang dau vao khong hop le!")





