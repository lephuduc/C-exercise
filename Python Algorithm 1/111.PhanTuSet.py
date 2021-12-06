def phan_tu_chung(set1,set2):
    return set1&set2
def phan_tu_rieng(set1,set2):
    return set1^set2


set1=set(input().split())
set2=set(input().split())

print(phan_tu_chung(set1,set2))
print(phan_tu_rieng(set1,set2))