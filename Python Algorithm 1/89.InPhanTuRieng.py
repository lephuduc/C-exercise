
def In_phan_tu(set1,set2):
    return set1^set2
set1=set(input().split())
set2=set(input().split())
print(*In_phan_tu(set1,set2))
