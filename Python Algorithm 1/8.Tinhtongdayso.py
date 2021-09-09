
#nhận dãy giá trị từ bàn phím
daygiatri= input("Nhập dãy số: ")
danhsach=daygiatri.split() # chia các dãy giá trị ra thành 1 list
dayso= map(int,danhsach) # định dạng lại các giá trị 
sum = sum(dayso) #tính tổng của list
print(sum)