
a,b,c=input("Nhập 3 cạnh của tam giác: ").split()
a,b,c=float(a),float(b),float(c)
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
    print("{}, {}, {} là ba cạnh của tam giác {}".format(a,b,c,tamgiac))
else :
    print("Không phải ba cạnh của tam giác!")