thapphan = input("Nhập số thập phân: ")
lamtron = input("Nhập số sau dấu phẩy: ")
pause = False
try: 
    thapphan= float(thapphan)
    lamtron = int(lamtron)
    pause = True
except:
    print("Định dạng bạn nhập không hợp lệ!")

if pause:
    print(round(thapphan,lamtron))
    print('{0:.{1}f}'.format(thapphan, lamtron))