#include<iostream>
using namespace std;
int main (){
    int num=10;
    int *p = &num;//*p contain adress of num
    int **pp = &p;//**pp contain adress of *p
    int ***ppp=&pp;//***ppp contain adress of **pp


    cout<<*p<<endl;//content of p means num
    cout<<**pp<<endl;//content of pp means *p
    cout<<***ppp<<endl;//comntent of ppp means **p

    cout<<p<<endl;//adress of num
    cout<<pp<<endl;//adress of p
    cout<<ppp<<endl;//adress of pp
}