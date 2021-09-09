def ChuoiKetQua(S):
    if S[-3:]=="ing":
        NewS=S.replace("ing","ly")
    else:
        NewS=S+"ing"
    return NewS
S=input()
print(ChuoiKetQua(S))
