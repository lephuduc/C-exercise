
def muti_two_list(ls1,ls2):
    result=[i*j for i,j in zip(ls1,ls2[::-1])]
    return result
try:
    ls1=list(map(float,input().split()))
    ls2=list(map(float,input().split()))
    if len(ls1)==len(ls2):
        print(*muti_two_list(ls1,ls2))
    else:
        print("Please enter two list have equal length")
except:
    print("Invalid input!")


