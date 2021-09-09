def delete_space(s):
    s=s.strip()
    while "  " in s:
       s = s.replace("  ", " ")
    return s
def in_danh_sach(ls1,ls2):
    list_name=[delete_space(name) for name in ls1]
    list_nationality=[delete_space(nationality) for nationality in ls2]
    for name,nation in zip(list_name,list_nationality):
        print(f"{name} - {nation}")
try:
    name=input()
    nationality=input()
    ls1=name.split(",")
    ls2=nationality.split(",")
    #xoa khoảng trắng thừa
    if len(ls1)==len(ls2):
        in_danh_sach(ls1,ls2)
    else:
        print("Two list need equal length!")
except :
    print('Invalid input!')
