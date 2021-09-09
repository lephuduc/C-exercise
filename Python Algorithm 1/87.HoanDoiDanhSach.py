def hoan_doi_danh_sach(list1,list2):
    head1 = list1[0:len(list1)//2]
    head2 = list2[0:len(list2)//2]
    end1 = list1[len(list1)//2:]
    end2 = list2[len(list2)//2:]
    result1=head1 + end2
    result2=head2 + end1
    return result1,result2

list1=input().split()
list2=input().split()
result1,result2=hoan_doi_danh_sach(list1,list2)
print(*result1)
print(*result2)