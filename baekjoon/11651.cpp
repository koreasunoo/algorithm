#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;

	vector<vector<int>> v(N, vector<int>(2));
	for(int i = 0; i<N; i++){
		cin>>v[i][1];
		cin>>v[i][0];
	}
	sort(v.begin(), v.end());

	for(int i = 0; i<N; i++){
		cout<< v[i][1]<<" "<<v[i][0]<<"\n";
	}
	
}
