#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin>>T;
	for(int i = 0; i<T; i++){
		string w;
		cin>>w;
		cout<<w[0]<<w[w.length()-1]<<"\n";
	}
}
