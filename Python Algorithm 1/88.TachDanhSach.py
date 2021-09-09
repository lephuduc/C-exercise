def Tach_danh_sach(ls):
    avg=sum(ls)/len(ls)
    list_smaller=[]
    list_greater=[]
    for element in ls:
        if element<avg:
            list_smaller.append(element)
        else:
            list_greater.append(element)
    return avg,list_smaller,list_greater

try:
    ls=list(map(float,input().split()))
    avg,list_smaller,list_greater =Tach_danh_sach(ls)
    print(avg)
    print(*list_smaller)
    print(*list_greater)
except:
    print("please enter real number!")
        