try:
    name1,high1= input("Tên và chiều cao bạn thứ nhất: ").split()
    name2,high2= input("Tên và chiều cao bạn thứ hai: ").split()
    high1=int(high1)
    high2=int(high2)
    if high1>high2:
        print("Bạn "+name1+" cao hơn "+name2)
    elif high1<high2:
        print("Bạn "+name2+" cao hơn "+name1)
    else:
        print("Chiều cao 2 bạn bằng nhau!")
except:
    print("Dữ liệu nhập không hợp lệ (tên nhập trước, chiều cao nhập sau, cách nhau bởi khoảng trắng")