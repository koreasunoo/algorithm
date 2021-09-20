#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	queue<int> q;
	int N, K;
	cin>>N>>K;
	for(int i = 1; i<=N; ++i){
		q.push(i);
	}
	vector<int> result;
	while(1){
		int temp = K;
		if(q.size()==0){
			break;
		}
		for(int i= 0; i<temp; ++i){
			if(i==temp-1){
				result.emplace_back(q.front());
				q.pop();
			}
			else{
				q.push(q.front());
				q.pop();
			}
		}
		
	}
	cout<<"<";
	for(int i= 0; i<result.size()-1; ++i){
		cout<<result[i]<<", ";
	}
	cout<<result[result.size()-1]<<">\n";
}
