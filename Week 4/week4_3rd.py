lst = [10,5,4,7,3,1,2,8]
a=len(lst)
for i in range(a):
    k=lst[i]
    for j in range(i-1,-1,-1):
        if(k<lst[j]):
             temp=lst[j]
             lst[j]=lst[j+1]
             lst[j+1]=temp  
print(lst)