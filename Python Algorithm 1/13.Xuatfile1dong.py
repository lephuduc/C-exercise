import time
try:
    inputfile= open("12.Bai12.inp","r",encoding="utf-8")
    textfile=  inputfile.read()#đọc các nội dung trong file
    lis=textfile.split() #gôm các dòng thành 1 list
    string= " ".join(lis)#gộp các phần tử list thành 1 dòng
    #lặp lại lần nữa
    lis2=string.split()
    string2= " ".join(lis2)
    with open("12.Bai12.out","w",encoding="utf-8") as outfile:
        outfile.write(string2)
        print("File đang được ghi")
        print("...")
        time.sleep(1)  
        print("Đã nhập thành công: ",string2)
except Exception as bug: 
    print("Có lỗi:" ,bug)
    