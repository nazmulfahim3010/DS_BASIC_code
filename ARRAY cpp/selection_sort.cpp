#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array;
    int n;
    cin>>n;

    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        array.push_back(x);
    }

    for (int i=0; i < n - 1;i++){
        int minimum_ind = i;
        for (int j = i + 1; j < n;j++){
            if (array[minimum_ind]>array[j]){
                minimum_ind = j;
            }
        }
        swap(array[minimum_ind], array[i]);
    }

    for (int i = 0; i < n;i++){
        cout << array[i] << " ";
    }
}