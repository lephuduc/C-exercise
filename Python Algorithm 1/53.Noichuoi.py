def chuoi_ket_qua(str1,str2):
    if len(str1)<5:
        str1 = str1*3
    if len(str2)<5:
        str2 = str2*3
    return str1 + str2
str1=input("Nhập chuỗi 1: ")
str2=input("Nhập chuỗi 2: ")
print(chuoi_ket_qua(str1, str2))