#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin>>T;
	for(int i= 0; i<T; i++){
		stack<char> s;
		string N;
		cin>>N;
		int len = N.length(),count = 0;
		for(int j= 0; j<len; j++){
			s.push(N[j]);
		}
		for(int j= 0; j<len; j++){
			if(s.top() == ')'){
				count++;
				s.pop();
			}
			else{
				count--;
				s.pop();
			}
			if(count<0){
				break;
			}
		}
		if(count==0){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
}
