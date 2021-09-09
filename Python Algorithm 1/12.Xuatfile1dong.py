import time
with open("12.Bai12.inp","r",encoding="utf-8") as inputfile:
    textfile=  inputfile.read()
    lis=textfile.splitlines()
    cau= " ".join(lis)
with open("12.Bai12.out","w",encoding="utf-8") as outfile:
    outfile.write(cau)
    print("File đang được ghi")
    print("...")
    time.sleep(1)  
    print("Đã nhập thành công: ",cau)