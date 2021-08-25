#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin>>N>>M;
	vector<pair<string, string>> v(N);
	for(int i= 0; i<N; ++i){
		string x, y;
		cin>>x>>y;
		v[i].first = x;
		v[i].second = y;
	}
	sort(v.begin(), v.end());
	for(int i= 0; i<M; ++i){
		string x;
		cin>>x;
		int high = N-1, low=  0;
		while(1){
			int mid = (high + low)/2;
			if(x==v[mid].first){
				cout<<v[mid].second<<"\n";
				break;
			}
			else if(x<v[mid].first){
				high = mid-1;
			}
			else{
				low = mid+1;
			}
			
		}
	}
}
