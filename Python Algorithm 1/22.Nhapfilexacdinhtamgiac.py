import time
try:
    with open("22.Bai22.inp","r",encoding="utf-8") as inpufile:
        a,b,c=map(float,inpufile.read().split())
    if a+b>c and a+c>b and b+c>a:
        tamgiac=""
        if a==b==c:
            tamgiac="đều"
        elif a==b!=c or a==c!=b or c==b!=a:
            tamgiac="cân"
        elif a**2==b**2+c**2 or b**2==a**2+c**2 or c**2==b**2+a**2:
            tamgiac="vuông"
        elif a**2>b**2+c**2 or b**2>a**2+c**2 or c**2>b**2+a**2:
            tamgiac="tù"
        else :
            tamgiac="nhọn"
        thongbao=("{}, {}, {} là ba cạnh của tam giác {}".format(a,b,c,tamgiac))
    else :
        thongbao="Không phải tam giác"
    with open("22.Bai22.out","w",encoding="utf-8") as outputfile:
        outputfile.write(thongbao)
        print("File đang được ghi \n. . .")
        time.sleep(1)
        print("Đã nhập thành công: ",thongbao)
except FileNotFoundError:
    print("Không tìm thấy file input!")
except:
    print("Định dạng đầu vào không hợp lệ!")
    


