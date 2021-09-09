def Delete_repeated(s):
    result=""
    # kiểm tra xem có bị trùng ko, nếu trùng thì không thêm nữa
    for i in s:
        if i not in result:
            result = result+i
    return result
s=input()
print(Delete_repeated(s))