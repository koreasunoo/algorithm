#include <bits/stdc++.h>
using namespace std;
int main(){
	bool as = true, de = true;
	for(int i = 1; i<=8; i++){
		int x;
		cin>>x;
		if(i!=x) as=false;
		if(x!=9-i) de = false;
	}
	if(as) cout<<"ascending";
	else if(de)	cout<<"descending";
	else cout<<"mixed";
}
