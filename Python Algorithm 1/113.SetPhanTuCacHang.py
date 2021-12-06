def phan_tu_o_cac_mang(ls,m,n):
    result=ls[0]
    for i in range(m):
        result=set(result)&set(ls[i])
    return result

def nhap_mang( m, n):
    result=[]
    for i in range(m):
        line=list(input().split())
        if len(line)>n:
            break
        result.append(line)
    return result

m,n=map(int,input().split())
ls=nhap_mang(m,n)
print(phan_tu_o_cac_mang(ls,m,n))        

