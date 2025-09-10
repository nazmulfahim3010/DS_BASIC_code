list=[]
n=int(input("enter number of number :"))
for _ in range(n):
    x=int(input())
    list.append(x)
minimum_ind=0
for i in range(n-1):
    minimum_ind=i
    for j in range(i+1,n):
        if list[minimum_ind]>list[j]:
            minimum_ind=j
    
    list[minimum_ind],list[i]=list[i],list[minimum_ind]

print(*list)

    ##https://www.w3schools.com/dsa/dsa_algo_selectionsort.php

