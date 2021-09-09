def get_element(M,N):
    list=[]
    for i in range(M):
        element = input().split()
        list.append(element)
        if len(element)>N:
            print("Danh sach ko dung kich thuoc")
            return []
    return list
def print_element(list):
    for i in list:
        print(*i)
try:
    M,N=map(int,input().split())
    if M>0 and N>0:
        list=get_element(M,N)
        print_element(list)
    else:
        print("Please enter natural number!")
except:
    print("Dinh dang ko hop le!")