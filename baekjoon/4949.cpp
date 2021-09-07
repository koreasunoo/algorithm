#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(1){
		stack<char> st;
		string s;
		getline(cin, s);
		bool result = true;
		if(s =="."){
			break;
		}
		for(int i = 0; i<s.length(); i++){
			int x = s[i];
			if(x =='(' or x=='['){
				st.push(x);
			}
			else if(x==')'){
				if(st.empty()or st.top() != '('){
					result = false;
					break;
				}	
				else{
					result= true;
					st.pop();
				}
				continue;
			}
			else if(x==']'){
				if(st.empty() or st.top() != '['){
					result = false;
					break;
				}
				else{
					result = true;
					st.pop();
				}

			}

		}
		if(!st.empty() or !result){
			cout<<"no\n";
		}
		else{
			cout<<"yes\n";
		}
	}

}
