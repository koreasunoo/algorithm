#include <bits/stdc++.h>
#include <vector>

using namespace std;

int cp(string a, string b){
	if(a.length() == b.length())
		return a<b;
	return a.length()< b.length();
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;
	vector<string> v;

	for(int i =0; i<N; i++){
		string str;
		cin>>str;
		if(find(v.begin(), v.end(), str) == v.end()){
			v.emplace_back(str);
		}
	}
	sort(v.begin(), v.end(), cp);

	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<"\n";
	}
	
}
