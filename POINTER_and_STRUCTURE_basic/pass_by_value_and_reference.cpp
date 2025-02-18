#include<iostream>
using namespace std;

void pass_by_value(int a){
    a=100;

}
void pass_by_reference(int *b){
    *b=100;
}

int main (){
    int x=10;
    int y=10;
    pass_by_value(x);
    pass_by_reference(&y);

    cout<<x<<endl;
/*because i have passed the value in the function thats why
  the function won't able to change its value*/
    cout<<y<<endl;
/*but in this case i have sent the memory adress or pointer
    in the fuction that is why the function changed the value 
    by finding the exact position of the varriable*/

 
}