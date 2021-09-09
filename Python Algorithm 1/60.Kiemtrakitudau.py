def xulichuoi(S):
    if (S[0] and S[-1]) == "*":
        return S.title()
    elif (S[0] and S[-1]) == "-":
        return S.swapcase()
    else:
        return S.capitalize()

S=input()
print(xulichuoi(S))