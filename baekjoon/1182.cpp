#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int N, M, S;
int arr[21];
bool visited[21] = {0, };
int result = 0;
void dfs(int cnt){
	if(cnt==M){
		int sum = 0;
		for(int i= 0; i<M; ++i){
			sum += arr[i];
		}
		if(sum ==S){
			result++;
		}
		return;
	}
	for(int i = 1; i<=N; ++i){

		if(!visited[i]){
			for(int j= 1; j<=i; ++j){
				visited[j] = true;
			}
			arr[cnt] = v[i];

			dfs(cnt+1);

			for(int j = i+1; j<=N; ++j){
				visited[j] = false;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>N>>S;
	v.emplace_back(0);
	for(int i = 1; i<=N; ++i){
		int x;
		cin>>x;
		v.emplace_back(x);
	}
	for(int i = 1; i<=N; ++i){
		M = i;
		if(M>N){
			break;
		}
		for(int j = 1; j<=N; ++j){
			visited[j]= false;
		}
		dfs(0);
	}
	cout<<result<<"\n";
}
