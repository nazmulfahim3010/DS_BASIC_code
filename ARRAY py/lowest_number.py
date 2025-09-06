n=int(input("enter number of number->"))
array=[]
while n!=0:
    x=int(input("enter number->"))
    array.append(x)
    n-=1

mini=array[0]
i=0
for num in array:
    if num<mini:
        mini=num
    i+=1

print("the minimum number is",mini)

##https://www.w3schools.com/dsa/dsa_data_arrays.php