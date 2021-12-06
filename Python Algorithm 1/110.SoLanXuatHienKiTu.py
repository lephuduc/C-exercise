def SoLanXuatHienKiTu(s):
    dic=dict()
    for c in s:
        dic[c]=s.count(c)
    return dic

s=input()
dic=SoLanXuatHienKiTu(s)
for key, val in dic.items():
    print(f"'{key}': {val};",end='')