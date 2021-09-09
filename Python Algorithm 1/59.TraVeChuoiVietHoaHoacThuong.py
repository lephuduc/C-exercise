
def VietHoaHoacThuong(S):
    if S[0].isupper():
        return S.upper()
    elif S[0].islower():
        return S.lower()
    else:
        return S
S = input()
print(VietHoaHoacThuong(S))