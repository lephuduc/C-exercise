def DaoNguocChuoi(s,a,b):
    chuoicon=s[a:b+1]
    chuoicon_r=chuoicon[::-1]
    print(chuoicon_r)
try:
    str_= input("Nhập chuỗi: ")
    a=int(input("Nhập a:"))
    b=int(input("Nhập b:"))
    if a>=len(str_) or b>=len(str_):
        print("a hoặc b lớn hơn độ dài chuỗi!")
    elif a>b:
        print("Vui lòng nhập a bé hơn b!")
    elif a<0 or b<0:
        print("Vui lòng nhập a và b dương!")
    else:
        DaoNguocChuoi(str_,a,b)
except:
    print("Định dạng đầu vào không hợp lệ!")
