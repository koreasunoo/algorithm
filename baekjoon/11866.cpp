#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, K;
	cin>>N>>K;
	queue<int> q;
	for(int i= 1; i<=N; i++){
		q.push(i);
	}
	cout<<"<";
	while(1){
		for(int i= 0; i<K-1; i++){
			q.push(q.front());
			q.pop();
		}
		if(q.size() == 1){
			cout<<q.front()<<">";
			exit(0);
		}
		else{
			cout<<q.front()<<", ";
			q.pop();
			
		}
	}
}
