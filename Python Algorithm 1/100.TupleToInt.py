def tuple_to_int(tup):
    number=int("".join(tup))
    return number
tup=tuple(input().split())
# all tra ve true neu tat ca phan tu deu true
isdigit = all(ptu.isdigit() for ptu in tup)
if isdigit:
    result = tuple_to_int(tup)
    print(result)
else:
    print("Dau vao khong hop le!")