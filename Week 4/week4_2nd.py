lst=[10,9,8,7,6,5,4,3,2,1]
a=len(lst)
for i in range (a):
    for j in range (a-i-1):
        if(lst[j+1]<lst[j]):
            temp=lst[j]
            lst[j]=lst[j+1]
            lst[j+1]=temp
print(lst)
