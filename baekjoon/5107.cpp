#include <bits/stdc++.h>
using namespace std;


vector<tuple<string, string, bool>> v;
int cnt = 0;

int find(string key){
	for(int i = 0; i<v.size(); i++){
		if(get<0>(v[i]) == key){
			return i;
		}
	}
}


void dfs(string key){
	int temp = find(key);
	if(get<2>(v[temp])){
		get<2>(v[temp]) = false;
		//cout<<get<0>(v[temp])<<"->"<<get<1>(v[temp])<<" is now false\n";
		dfs(get<1>(v[temp]));
	}
	else{
		cnt++;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test_case_count = 0;
	vector<int> result;
	while(1){
		v.clear();
		
		int N;
		cnt = 0;
		cin>>N;
		
		if(!N){
			break;
		}

		test_case_count++;
		
		for(int i = 0; i<N; i++){
			string a, b;
			cin>>a>>b;
			v.push_back(make_tuple(a, b, true));
		}
		
		for(int i= 0; i<N; i++){
			if(!get<2>(v[i])){
				continue;
			}
			get<2>(v[i]) = false;
			//cout<<get<0>(v[i])<<"->"<<get<1>(v[i])<<" is now false\n";
			dfs(get<1>(v[i]));
		}
		result.push_back(cnt);

	}
	for(int i = 1; i <= test_case_count; i++){
		cout<<i<<" "<<result[i-1]<<"\n";
	}
	
}
