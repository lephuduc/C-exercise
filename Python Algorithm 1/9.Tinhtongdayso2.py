#nhận dãy giá trị từ bàn phím
daygiatri= input("Nhập dãy số: ")
danhsach=daygiatri.split() # chia các dãy giá trị ra thành 1 list
ispause= False
dayso= map(int,danhsach) # định dạng lại các giá trị 
print(dayso)
try:
    sum = sum(dayso) #tính tổng của list
    ispause= True
except:
    print("Định dạng đầu vào không hợp lệ! ")
if ispause:
    print(sum)