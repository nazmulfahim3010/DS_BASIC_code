#include<iostream>
using namespace std;
int main (){
    int array[3]={10,20,30};
    int *p = array;///stored the firsdt aDRESS of the array 
    cout<<p<<"|||"<<endl;
    for(int i=0;i<3;i++){
        cout<<"->"<<p+i<<endl;///will print address of array
        cout<<*(p+i)<<endl;//will print element

    }
}