def deleteRepeatChar(s):
    newS=""
    for char in s:
        if char not in newS:
            newS+=char
    return newS
def countChar(s):
    for char in deleteRepeatChar(s):
        count=s.count(char)
        print(f"'{char}': {count};",end=" ")
s=input()
deleteRepeatChar(s)
countChar(s)