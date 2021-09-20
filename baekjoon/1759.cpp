#include <bits/stdc++.h>
using namespace std;
int L, C;
vector<char> v;
char arr[16];
bool visited[16];
vector<string> result;
void dfs(int cnt){
	if(cnt == L){
		string x="";
		for(int i= 0; i<L; ++i){
			x+= arr[i];
		}
		sort(x.begin(), x.end());
		int m = 0, j= 0; //m은 모음개수, j는 자음개수
		for(int i = 0; i<x.length(); ++i){
			if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u'){
				m++;
			}
			else{
				j++;
			}

		}
		if(m>=1 && j>=2){
			result.emplace_back(x);
		}
		return;
	}
	for(int i= 1; i<=C; ++i){
		if(!visited[i]){
			for(int j =1; j<=i; ++j){
				visited[j] = true;
			}
			arr[cnt] = v[i];
			dfs(cnt+1);
			for(int j = i+1; j<=C; ++j){
				visited[j]= false;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>L>>C;
	v.emplace_back('a');
	for(int i = 0; i<C; ++i){
		char x;
		cin>>x;
		v.emplace_back(x);
	}
	dfs(0);
	sort(result.begin(), result.end());
	for(int i = 0; i<result.size(); ++i){
		cout<<result[i]<<"\n";
	}
}
