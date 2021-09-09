try:
    name = input("Nhập tên của bạn: ")
    age = int(input("Nhập tuổi của bạn: "))
    if age>1:
        print(f"Xin chao toi ten la {name}, toi {age} tuoi")
    else:
        print("Vui lòng nhập tuổi là số nguyên dương!")
except:
    print("Định dạng đầu vào không hợp lệ!")