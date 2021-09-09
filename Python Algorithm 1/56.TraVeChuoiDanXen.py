def MaxLen(a,b):
    if a>=b:
        return a
    else:
        return b
def VietChuoi(s1,s2):
    s2_r=s2[::-1]
    S=''
    for i in range(MaxLen(len(s1),len(s2))):
        if i<len(s1):
            S+=s1[i]
        if i<len(s2):
            S+=s2_r[i]
    return S
s1=input("Nhập chuỗi 1: ")
s2=input("Nhập chuỗi 2: ")
print(VietChuoi(s1,s2))
