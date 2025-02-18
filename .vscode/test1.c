#include<stdio.h>
int main()
{int a,b,max ,min,product=1,c ;

scanf ("%d",&a);
max = a+4;
min = a;

for (c=min;c<=max;c++)
{
    product = product * c;
   
}
printf("%d",product);
    return 0;
}/*Write a program in C to print the product of the first 5 natural numbers*/