def Phan_tu_mot_set(setX,setY):
    return setX-setY



setX=set(input().split())
setY=set(input().split())

print(Phan_tu_mot_set(setX,setY))
print(Phan_tu_mot_set(setY,setX))