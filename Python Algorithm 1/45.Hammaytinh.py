try:
    a,pheptinh,b=input("Nhap phep tinh:").split()
    a,b=float(a),float(b)
    if pheptinh=="+":
        print(f"{a} + {b} = {a+b}" )
    elif pheptinh=="-":
        print(f"{a} - {b} = {a-b}" )
    elif pheptinh=="*":
        print(f"{a} * {b} = {a*b}" )
    elif pheptinh==":" or pheptinh=="/":
        if b!=0:
            print(f"{a} : {b} = {a/b}" )
        else:
            print("Số bị chia phải khác 0")
    else:
        print("Vui lòng nhập đúng phép tính!")
except:
    print("Bạn nhập sai định dạng!")



