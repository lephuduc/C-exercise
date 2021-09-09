#Hàm trả về từ có độ dài lớn nhất theo thứ tự trong chuỗi s. (Tham số truyền vào là chuỗi s).

def get_max_len_word(s):
    List=s.split()
    max_len=len(List[0]) 
    result=List[0]
    for word in List:
        if len(word)>max_len:#tìm max len và gán từ max len vào biến result
            result=word
    return result
s=input()
print(get_max_len_word(s))