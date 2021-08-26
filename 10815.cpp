#include <bits/stdc++.h>
using namespace std;
bool arr[20000001];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin>>N;
	for(int i = 0; i<=20000001; ++i){
		arr[i] = false;
	}
	for(int i= 0; i<N; ++i){
		int x;
		cin>>x;
		x+=10000000;
		arr[x] = true;
	}
	cin>>M;
	vector<int> result(M);
	for(int i = 0; i<M; ++i){
		cin>>result[i];
	}
	for(int i= 0; i<M; ++i){
		if(!arr[result[i]+10000000]){
			cout<<"0 ";
		}
		else{
			cout<<"1 ";
		}
	}
	cout<<"\n";

}
