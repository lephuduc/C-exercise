def Delete_spaces(s):
    #xóa các khoảng trắng
    while "  " in s:
        s=s.replace("  "," ")
    s=s.title()
    #xuống hàng
    s=s.replace(". ","\n")
    #cắt khoảng trắng dư thừa ở đầu hàng, cuối hàng
    s=s.strip(" ")
    return s

s=input()
print(Delete_spaces(s))