def Char(s):
    count1=0
    count2=0
    for c in s:
        if c.isdigit(): count1+=1
        if c.islower() or c.isupper(): count2+=1
    if count1>0 and count2>0: return True
    else: return False
def kiemtra(s):
    ls=s.split(' ')
    count=0
    for e in ls:
        if Char(e):
            count+=1
    return count
s=input()
print(kiemtra(s))