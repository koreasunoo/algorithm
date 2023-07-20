#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin>>N>>M;
	vector<int> v(N+1);
	for(int k = 1; k<=N; k++){
		v[k] = k;
	}
	for(int k = 0; k<M; k++){
		int i, j;
		cin>>i>>j;
		if(i!=j){
			int temp = v[i]; 
			v[i] = v[j];
			v[j] = temp;
		}
	}
	for(int k = 1; k<=N; k++){
		cout<<v[k]<<" ";
	}
	cout<<"\n";
}
