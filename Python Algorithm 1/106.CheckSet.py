def check_set(set_):
    if len(set_)%2==0:
        return set()
    else:
        return set_




set_=set(input().split())
print(check_set(set_))

