import math
try:
    def PTB2():
        a,b,c=input("Nhập hệ số của phương trình bậc 2 (cách nhau bởi khoảng trắng): ").split()
        a,b,c = float(a),float(b),float(c)
        if a==0:
            if b==0:
                if c==0:
                    print("Phương trình có vô số nghiệm!")
                else:
                    print("Phương trình vô nghiệm ")
            else:
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
                print("X1= ",str(round(x1,2)))
                print("X2= ",str(round(x2,2)))
    def PTB1():
        a,b=input("Nhập hệ số của phương trình bậc 1 (cách nhau bởi khoảng trắng): ").split()
        a,b=float(a),float(b)
        if a==0:
            if b==0:
                print("Phương trình vô số nghiệm")
            else:
                print("Phương trình vô nghiệm")
        else:
            print(f"Phương trình có nghiệm là: {round((-b/a),2)}")

    choose=int(input("Chọn 1 trong 2 chức năng: \n(1)PTB1 \n(2)PTB2 \n"))
    if choose==1:
        PTB1()
    elif choose==2:
        PTB2()
    else:
        print("Vui lòng nhập chính xác lựa chọn")
except:
    print("Bạn nhập không đúng định dạng!")