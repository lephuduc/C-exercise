try:
    number =int(input("Nhap so can tinh: "))
    sum_odd=0
    sum_even=0
    if number>=0:
        while number>0:
            sur = number%10
            if sur%2==0:
                sum_even+=sur
            else:
                sum_odd+=sur
            number=number//10
        print(f"Tổng số lẻ là: {sum_odd} \nTổng số chẳn là: {sum_even}")
    else:
        print("Vui lòng nhập số tự nhiên!")
except:
    print("Bạn nhập sai định dạng!")