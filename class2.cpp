#include<bits/stdc++.h>
using namespace std;
class account{
    public:
    string name;
    string ac;
    double balance;
    account(){
        cout<<"x";
    }

    void deposit(double amount){
        balance+=amount;
     }


};
int main(){
    account f1;

    cin>>f1.name;
    cin>>f1.ac;
    cin>>f1.balance;

    f1.deposit(100);
    

    cout<<f1.name<<f1.ac<<f1.balance<<endl;

    

    
}