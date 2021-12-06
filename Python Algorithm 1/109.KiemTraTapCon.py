def Kiem_tra_tap_con(setY,setX):
    for i in setY:
        if i not in setX:
            return False
    return True



setY=set(input().split())
setX=set(input().split())


print(Kiem_tra_tap_con(setY,setX))
