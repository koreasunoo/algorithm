#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool cp(pair<string, pair<int, int> > a ,
		pair<string, pair<int, int> > b){

	if(a.second.first == b.second.first){
		return a.second.second< b.second.second;

	}
	return a.second.first< b.second.first;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;
	vector<pair<string, pair<int, int> > > v;

	for(int i = 0; i<N; i++){
		int x;
		int ind = i;
		string y;
		cin>>x>>y;
		v.emplace_back(pair<string, pair<int, int> >(y, pair<int, int>(x, ind)));
		

	}
	sort(v.begin(), v.end(), cp);
	for(int i = 0; i<N; i++){
		cout<<v[i].second.first<<" "<<v[i].first<<"\n";
	}

}
