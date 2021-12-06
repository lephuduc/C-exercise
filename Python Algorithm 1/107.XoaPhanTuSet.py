def delete_element(set_):
    set2=set_.copy()
    for i in set2:
        if i.isdigit():
            set_.remove(i)
    return set_ 

set_=set(input().split())
print(delete_element(set_))