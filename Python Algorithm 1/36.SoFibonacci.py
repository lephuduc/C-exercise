try:
    n=int(input("Nhap thu tu so Fibonacci: "))
    if n>0:
        count,number1,number2=1,0,1
        while count<n:
            sum=number1+number2
            number1=number2
            number2=sum
            count+=1
        print(number1)
    else:    
        print("Vui lòng nhập số tự nhiên!")
except:
    print("Định dạng đầu vào không hợp lệ!")