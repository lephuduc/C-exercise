import time
try:
    with open("10.Bai10.inp",mode = "r",encoding='utf-8') as inpfile:
        ten=inpfile.readline().strip("\n")
        tuoihientai=int(inpfile.readline())
    with open("10.Bai10.out",mode= "w",encoding='utf-8') as outfile:
        outfile.write("Vào 20 năm nữa, tuổi của "+ten+" sẽ là "+str(tuoihientai+20))
        print("File đang được ghi")
        print("...")
        time.sleep(1)  
        print("Đã nhập thành công: "+ten+" và tuổi "+str(tuoihientai))
except FileNotFoundError:
    print("Không tìm thấy file!")
except:
    print("Định dạng đầu vào không hợp lệ ")