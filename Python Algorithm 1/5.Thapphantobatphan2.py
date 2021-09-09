thapphan = input("Nhap so thap phan: ")
try:
    thapphan = int(thapphan)
    print("So thap phan %d trong bat phan la: %o " %(thapphan,thapphan))
except:
    print("Ban nhap sai dinh dang!")