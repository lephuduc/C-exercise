try:
    name1,height1 = input("Nhập tên và chiều cao của bạn 1: ").split()
    name2,height2 = input("Nhập tên và chiều cao của bạn 2: ").split()
    height1,height2=int(height1),int(height2)
    if height1>0 and height2>0:
        if height1>height2:
            print(f"{name1} cao hơn!")
        elif height1<height2:
            print(f"{name2} cao hơn!")
        else:
            print("Hai bạn cao bằng nhau!")
        
    else:
        print("Vui lòng tuổi là số nguyên dương!")
except:
    print("Định dạng đầu vào không hợp lệ!")