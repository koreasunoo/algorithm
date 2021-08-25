#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;
 	queue<int> q;
	for(int i= 0; i<N; i++){
		string a;
		cin>>a;
		if(a=="push"){
			int b;
			cin>>b;
			q.push(b);

		}
		else if(a=="front") {
			if(q.size() == 0){
				cout<<"-1"<<"\n";
				continue;
			}
			cout<<q.front()<<"\n";
		}
		else if(a=="back"){ 
			if(q.size() == 0){
				cout<<"-1"<<"\n";
				continue;
			}
			cout<<q.back()<<"\n";
		}
		else if(a=="empty") cout<<q.empty()<<"\n";
		else if(a=="pop"){
			if(q.size() == 0){
				cout<<"-1"<<"\n";
				continue;
			}
			cout<<q.front()<<"\n";
			q.pop();
		}
		else {

			cout<<q.size()<<"\n";
		}
	}
}
