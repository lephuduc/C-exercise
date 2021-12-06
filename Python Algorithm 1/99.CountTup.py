def count_0(tupleX):
   demPtu0 = tupleX.count('0')
   demKyTu0 = [ptu.count('0') for ptu in tupleX]
   return demPtu0, sum(demKyTu0)

tup=tuple(input().split())
print(tup)
print(count_0(tup))