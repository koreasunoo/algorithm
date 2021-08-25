#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin>>N>>M;
	vector<string> see(N);
	vector<string> hear(M);
	vector<string> result;
	for(int i= 0; i<N; ++i){
		string x;
		cin>>x;
		see[i] = x;
	}
	for(int i= 0; i<M; ++i){
		string x;
		cin>>x;
		hear[i] = x;
	}
	sort(see.begin(), see.end()); //see를 탐색할 예정
	for(int i  = 0; i<M; ++i){
		int low  = 0, high = N-1;
		while(high>=low){
			int mid = (low + high)/2;
			if(hear[i] == see[mid]){
				result.emplace_back(hear[i]);
				break;

			}
			else if(hear[i]>see[mid]){
				low = mid+1;
			}
			else{
				high=  mid-1;
			}
		}
	}
	cout<<result.size()<<"\n";
	sort(result.begin(), result.end());
	for(int i= 0 ;i<result.size(); ++i){
		cout<<result[i]<<"\n";
	}
}
