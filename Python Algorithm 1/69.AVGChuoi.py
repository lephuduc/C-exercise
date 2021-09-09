def AVG(s):
    sum,count,avg=0,0,0
    for e in s.split(" "):
        if e.isdigit():
            sum+=int(e)
            count+=1
    if count!=0: avg=sum/count
    return sum,avg
s=input()
sum,avg=AVG(s)
print(sum,avg,sep="\n")

