 #include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    m["a"]=200;
    m["x"]=100;
    m["z"]=20;
    m["c"]=10;

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }//it is in lexicographical order cause this is only a map.


    //Nahid sir
    /*#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,string>m;

	m.insert({8,"fahim"});

	for(auto item:m){
		cout<<item.first<<" "<<item.second;
	}
}*/

    
}