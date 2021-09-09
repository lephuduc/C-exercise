a, b, c = map(float, input("Enter 3 edge of Triangle: ").split())

def Triangle(a,b,c):
    if (a+b>c) and (a+c>b) and (b+c>a):
        return True
    else:
        return False

if Triangle(a,b,c):
    print("Is Triangle")
else:
    print("Not Triangle")