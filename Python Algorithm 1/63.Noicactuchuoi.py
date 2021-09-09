def noichuoi(s):
    list_=s.split()#chia các từ
    return "-".join(list_) #gộp các từ thành chuỗi
s = input()
print(noichuoi(s))