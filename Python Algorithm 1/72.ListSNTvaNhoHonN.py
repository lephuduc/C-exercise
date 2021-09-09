n=int(input())
if n>0:
    ls1=[]
    ls2=[]
    for i in range(n):
        ls1.append(i)
        ls2.append(i**2)
    print(*ls1)
    print(*ls2)
else:
    print("Vui long nhap so tu nhien")
