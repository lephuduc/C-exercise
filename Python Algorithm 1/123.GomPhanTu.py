def gom_phan_tu(ls):
    dic=dict()
    for char in ls: #z
        ds=[]
        ds.append(char)
        ds=ds*ls.count(char)
        dic[char]=ds
    return dic

ls=input().split()
print(gom_phan_tu(ls))