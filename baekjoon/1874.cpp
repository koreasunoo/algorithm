#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	stack<int> s;
	string result = "";
	int cnt = 1;
	while(n--){
		int x;
		cin>>x;
	 	while(cnt<=x){
			s.push(cnt);
			result+="+\n";
			cnt++;
			
		}
		if(s.top()==x){
			result+="-\n";
			s.pop();
		}
		else{
			result = "NO";
			break;
		}
	}
	cout<<result;
}
