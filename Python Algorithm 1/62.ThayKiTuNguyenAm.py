
def ThayKiTu(S,NA):
    amount =0
    for i in range(0,len(S)):
        if S[i] in NA:
            S=S.replace(S[i],"$")#thay the tất cả các kí tự yêu cầu
        amount+=1
    return S,amount
NguyenAm=["A","a","O","o","E","e","U","u","I","i"]
S=input()
print(ThayKiTu(S,NguyenAm)[1])
print(ThayKiTu(S,NguyenAm)[0])
