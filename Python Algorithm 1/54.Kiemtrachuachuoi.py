str1=input("Nhập chuỗi 1: ")
str2=input("Nhập chuỗi 2: ")
if str2 in str1:
    n = str1.count(str2)
    if n>1:
        print(n)
    else:
        print(f"Chuỗi {str2} nằm trong {str1}")
else:
    print(f"Chuỗi {str2} không nằm trong {str1}")
