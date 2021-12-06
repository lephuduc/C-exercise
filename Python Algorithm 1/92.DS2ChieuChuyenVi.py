def get_element(M,N):
    list=[]
    for i in range(M):
        element = input().split()
        list.append(element)
        if len(element)!=N:
            print("Danh sach ko dung kich thuoc")
            return []
    return list
def print_element(list):
    for i in list:
        print(*i)
def hoan_vi(list):
    result = []
    for i in range(len(list[0])):
        row=[]
        for e in list:
            row.append(e[i])
        result.append(row)
    return result
try:
    M,N=map(int,input().split())
    if M>0 and N>0:
        list=get_element(M,N)
        print_element(hoan_vi(list))
    else:
        print("Please enter natural number!")
except:
    print("Dinh dang ko hop le!")