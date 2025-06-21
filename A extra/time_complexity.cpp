///constant complexity
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;int b=5;
//     int sum=a+b;
//     cout<<sum;

// }

///loglogn complexity
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=100000;
    int steps=0;
    for(int i=2;i<n;i+=pow(i,2)){
        steps++;
    }
    cout<<steps;
}

