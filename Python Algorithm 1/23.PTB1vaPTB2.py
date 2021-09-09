import math 
import time
try:    
    filename="23.inp"
    input = open(filename,mode="r")
    choose= int(input.readline())
    if choose ==2:
        a,b,c = map(float,input.readline().split())
        if a==0 and b==0 and c==0:
            out="Phương trình có vô số nghiệm!"
        elif a==0 and b==0 and c!=0:
            out="Phương trình vô nghiệm "
        elif a==0 and b!=0 and c!=0:
            out="Phương trình có 1 nghiệm x = "+str(-c/b)
        else:
            delta=b**2-(4*a*c)
            if delta<0:
                out="Phương trình vô nghiệm "
            elif delta==0:
                x=round(-b/(2*a),2)
                out="Phương trình có nghiệm x1 = x2 = "+str(x)
            else:
                x1=(-b+math.sqrt(delta))/(2*a)
                x2=(-b-math.sqrt(delta))/(2*a)
                out="Phương trình có 2 nghiệm: x1 = "+str(round(x1,2)) +"\n"+ "x2 = "+str(round(x2,2))
    elif choose ==1:
        a,b=map(float,input.readline().split())
        if a==0 :
            if b==0:
                out="Phương trình vô số ngiệm"
            else:
                out="Phương trình vô nghiệm"
        else:
            out="x = "+str(round(-b/a,2))
    else :
        out="Lựa chọn không hợp lệ! \n Vui lòng chọn một trong hai: \n (1) Phương trình bậc một \n (2) Phương trình bậc hai \n"
except FileNotFoundError:
    out="Không tìm thấy file"+filename
except:
    out="Định dạng đầu vào không hợp lệ!"
with open("23.out","w",encoding="utf-8") as outfile:
    outfile.write(str(out))
    print("File đang được ghi \n...")
    time.sleep(1)
    print("Đã ghi")