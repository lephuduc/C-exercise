def max_len_row(list):
    result=[]
    for i in list:
        max=i[0]
        for j in i:
            if len(j)>len(max):
                max=j
        result.append(max)
    return result
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
        print(*max_len_row(list))
    else:
        print("Please enter natural number!")
except:
    print("Dinh dang ko hop le!")