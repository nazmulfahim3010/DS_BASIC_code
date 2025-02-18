#include<iostream>
using namespace std;
int array_function(int *p){
    for(int i=0;i<3;i++){
        cout<<*(p+i);
    }


}
int main (){
    int array[3];
    int *pointer_of_array=array;
    for(int i=0;i<3;i++){
        cin>>array[i];
    }
    array_function(pointer_of_array);//this process is call pass by reference
}