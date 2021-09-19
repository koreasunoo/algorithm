#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin>>N;
	vector<int> v(N);
	for(int i =0; i<N; ++i){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	int x= -1001;
	for(int i= 0; i<N; ++i){
		if(x!=v[i]){
			cout<<v[i]<<" ";
			x=v[i];
		}
	}
	cout<<"\n";
}
