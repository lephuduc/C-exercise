import math
try:
    a,b,c=input("Nhập hệ số của phương trình bậc 2 (cách nhau bởi khoảng trắng): ").split()
    a,b,c = float(a),float(b),float(c)
    if a==0 and b==0 and c==0:
        print("Phương trình có vô số nghiệm!")
    elif a==0 and b==0 and c!=0:
        print("Phương trình vô nghiệm ")
    elif a==0 and b!=0 and c!=0:
        print("Phương trình có 1 nghiệm x = ",str(-c/b))
    else:
        delta=b**2-(4*a*c)
        if delta<0:
            print("Phương trình vô nghiệm ")
        elif delta==0:
            x=round(-b/(2*a),2)
            print("Phương trình có nghiệm x1 = x2 = "+str(x))
        else:
            x1=(-b+math.sqrt(delta))/(2*a)
            x2=(-b-math.sqrt(delta))/(2*a)
            print("Phương trình có 2 nghiệm: ")
            print("x1= ",str(round(x1,2)))
            print("x2= ",str(round(x2,2)))
except:
    print("Bạn nhập không chính xác!")

