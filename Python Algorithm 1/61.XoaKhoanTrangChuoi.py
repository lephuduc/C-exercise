def Delete_space(S):
    ds=list(i for i in range(1,len(S)+1))
    ds=ds[::-1]
    for i in ds:
        S=S.replace(" "*i," ").strip(" ")#thay thế tất cẩ các khoảng trắng
    return  S
S=input()
print(Delete_space(S))