try:
    row=int(input("Nhap so dong: "))
    code=65
    if row>0:
        for i in range(row):
            just=" "*((row)*2-2)
            print(just,end="")
            for j in range(i*2+1):
                char=chr(code)
                print(char,end=' ')
                code+=1
                if code == 91:
                    code=65
            print()
            row-=1
    else:
        print("Vui lòng nhập số nguyên dương!")
except:
    print("Đầu vào không hợp lệ")