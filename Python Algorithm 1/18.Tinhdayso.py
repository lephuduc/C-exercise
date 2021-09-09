result=None
try:
    so1,pheptinh,so2= input("Nhập dãy số cần tính: ").split()
    so1=float(so1)
    so2=float(so2)
    if pheptinh=="x" or pheptinh=="X" or pheptinh==".":
        result=so1*so2
    elif pheptinh=="+":
        result= so1+so2
    elif pheptinh=="-":
        result=so1-so2
    else :
        if so2==0:
            print("Không thể chia cho 0 ")
        else:
            result=so1/so2
except:
    print("Bạn nhập sai định dạng!")
if result!=None:
    print(str(so1)+pheptinh+str(so2)+" = "+str(result))