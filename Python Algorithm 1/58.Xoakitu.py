def XoaKiTuChan(S):
    new_S=""
    for i in range(len(S)):
        if i%2!=0:
            new_S+=S[i]
    return new_S
def XoaKiTule(S):
    new_S=""
    for i in range(len(S)):
        if i%2==0:
            new_S+=S[i]
    return new_S
S=input()
if len(S)%2==0:
    print(XoaKiTuChan(S))
else:
    print(XoaKiTule(S))
