#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int j;
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<"\n";
    }

}

//    1
//   12
//  123
// 1234