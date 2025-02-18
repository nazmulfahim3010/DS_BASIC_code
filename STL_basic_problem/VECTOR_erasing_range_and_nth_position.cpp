#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
	int n;//n=6
	cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
	}//v= 1 4 6 2 8 9

	int re_index;
	cin>>re_index;//re_index = 2

	v.erase(v.begin()+re_index);
	// removing index number 2

	//new vector=1 4 2 8 9
	int re1,re2;
	cin>>re1>>re2;//re1= 2 and re2=4

	v.erase(v.begin()+(re1-1),v.begin()+(re2));
	//removing index re1-1 to re2-1 .

	//new vector= 1 8 9

	cout<<v.size()<<endl;

	for(auto i:v){
		cout<<i<<" ";
	}

    /*
    o/p::
    5
1 2 3 4 5
4
2 3
2
1 4
    */
}