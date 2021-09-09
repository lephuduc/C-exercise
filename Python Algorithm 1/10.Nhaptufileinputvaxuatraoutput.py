with open("10.Bai10.inp",mode = "r",encoding='utf-8') as inpfile:
    ten=inpfile.readline().strip("\n")
    tuoihientai=int(inpfile.readline())
with open("10.Bai10.out",mode= "w",encoding='utf-8') as outfile:
    outfile.write("Vào 20 năm nữa, tuổi của "+ten+" sẽ là "+str(tuoihientai+20))