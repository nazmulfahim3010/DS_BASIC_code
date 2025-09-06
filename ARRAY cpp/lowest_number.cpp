#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        array[i]=x;
    }

    int min=array[0];
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];

        }
    }

    cout<<min<<endl;

}
////https://www.w3schools.com/dsa/dsa_data_arrays.php