
def find_index(tup,value):
    result=tuple(i for i,val in enumerate(tup) if val==value)
    return result
    
tup=tuple(input().split())
value=input()
print(find_index(tup,value))
