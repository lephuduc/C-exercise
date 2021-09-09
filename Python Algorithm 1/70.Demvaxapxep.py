s=input()
digit=""
chars = ""
symbols = ""
for c in s:
    if c.islower() or c.isupper():
        chars +=c
    elif c.isdigit():
        digit +=c
    else:
        symbols +=c
print(len(digit))
print(len(chars))
print(len(symbols))
result=digit+chars+symbols
print(result)
