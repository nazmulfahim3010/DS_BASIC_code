#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[min_index]>v[j]){
                min_index=j;
            } 
            
        }
        swap(v[i],v[min_index]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


    /*
    #include<iostream>
using namespace std;
int main(){
    int n=10;
    int ind;
    bool is_stop=false;
    int a[n]={1,9,2,8,3,7,4,6,5,0};
    for(int i=0;i<n-1;i++){
        int min=a[i];
        ind=i;

        for(int j=i;j<n;j++){
            if(min>a[j]){
                min=a[j];
                ind=j;
            }
            else{
                is_stop=true;
            }
        }
    
        swap(a[i],a[ind]);
        

    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
    */
    
    
    
    
}