lst = [10,5,4,7,3,1,2,8]
a=len(lst)  

for i in range(a):  
    min_idx = i
    for j in range(i+1, a):
        if (lst[min_idx] > lst[j]):
            min_idx = j
    temp=lst[i]
    lst[i]=lst[min_idx]
    lst[min_idx]=temp
print(lst)
