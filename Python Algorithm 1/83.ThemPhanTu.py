def add_element(ls,n):
    for i in range(len(ls)):
        if i%n==0 and i!=0:
            ls.insert(i+1,"Kteam")
    return ls
try:
    s=input()
    ls=s.split()
    if ls==[]:
        print("Danh sach rong")
    else:
        n=int(input())
        print(*add_element(s,n))
except:
    print("Co loi roi dai ca!")

    