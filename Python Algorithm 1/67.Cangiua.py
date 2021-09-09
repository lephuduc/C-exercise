def Center(s):
    for i in range(len(s)):
        #xoa khoang trang -xuong dong(new line)
        s=s.replace("  "," ")
    #chia ra thanlist cac dong
    s=s.strip(" ")
    ls=s.split(". ")
    max=len(ls[0])
    for row in ls:
        if len(row)>max:
            max=len(row)
    for e in ls:
        print(e.center(max," "))
s=input()
Center(s)