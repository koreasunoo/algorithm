#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;
	stack<int> s;

	for(int i= 0; i<N; i++){
		string x;
		cin>>x;
		if(x=="push"){
			int num;
			cin>>num;
			s.push(num);
		}
		else if(x=="top"){
			if(s.size()==0){
				cout<<"-1"<<"\n";
				continue;
			}
			else cout<<s.top()<<"\n";
		}
		else if(x=="empty"){
			cout<<s.empty()<<"\n";
		}
		else if(x=="pop"){
			if(s.size()==0){
				cout<<"-1"<<"\n";
			}
			else{
				cout<<s.top()<<"\n";
				s.pop();
			}
		
		}
		else if(x=="size") cout<<s.size()<<"\n";
	}
}
