list =[]
n=int(input("enter number of input: "))

for _ in range(n):
    x=int(input("_>"))
    list.append(x)

for i in range(n-1):
    for j in range(i+1,n):
        if list[i]>list[j]:
            list[i],list[j]=list[j],list[i]

print(*list)

##https://www.w3schools.com/dsa/dsa_algo_bubblesort.php