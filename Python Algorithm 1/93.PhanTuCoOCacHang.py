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

def common_element(list):
    result = []
    for i in range(len(list)):
        for j in range(len(list[i])):
            element=list[i][j]
            f=True
            for row in list:
                if element not in row:
                    f=False
                    break
            if f==True and element not in result:
                result.append(element)
    return result

try:
    M,N=map(int,input().split())
    if M>0 and N>0:
        list=get_element(M,N)
        print(*common_element(list))
    else:
        print("Please enter natural number!")
except:
    print("Dinh dang ko hop le!")