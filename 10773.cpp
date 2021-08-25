#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long result = 0;
	int K;
	cin>>K;
	stack<int> s;
	for(int i = 0; i<K; ++i){
		int x;
		cin>>x;
		if(x==0){
			s.pop();
		}
		else{
			s.push(x);
		}
	}
	int si = s.size();
	for(int i= 0; i<si; ++i){
		result += s.top();
		s.pop();
	}
	cout<<result<<"\n";
}
