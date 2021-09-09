def Triangle(a,b,c):
    if (a+b>c) and (a+c>b) and (b+c>a):
        return True
    else:
        return False
try:
    a, b, c = map(float, input("Enter 3 edge of Triangle: ").split())
    if Triangle(a,b,c):
        print("Is Triangle")
    else:
        print("Not Triangle")   
except Exception as bug:
    print(bug)