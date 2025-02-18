#include<bits/stdc++.h>
using namespace std;
int main(){
    double num;
    cin>>num;
    double p=1e-6 ;
    double start=1.0,end=num ;
    double result;

    while((end-start)>p){
        double mid=(start+end)/2.0 ;
        result=mid;


        if(mid*mid>num){
            end=mid;
        }
        else if(mid*mid<num){
            start=mid;
        }
    }
    cout<<result <<endl;

    

}