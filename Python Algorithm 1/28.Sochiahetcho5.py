try:
    a,b = map(int,input("Nhập a và b (a<=b): ").split())
    if a<=b:
        a_to_b=list(i for i in range(a,b+1))
        lst=[]
        for i in a_to_b:
            if i%5==0:
                lst.append(i)
        if len(lst)==0:
            print("Không có số nào chia hết cho 5")
        else:
            i=0
            while i<=9:
                print(lst[i],end=" ")
                i+=1
                if i==len(lst):
                    break
            if len(lst)>=10:
                print("\nIn quá 10 số rồi")
            else:
                print("\nĐã in hết các số chia cho 5")   
    else :
        print("Số thứ nhất lớn hơn số thứ hai rồi!")
except:
    print("Sai định dạng đầu vào")
