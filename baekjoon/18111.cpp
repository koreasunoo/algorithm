#include <bits/stdc++.h>
using namespace std;
int comp(pair<int, int>a, pair<int, int>b){
	if(a.first == b.first){
		return a.second > b.second;
	}
	else{
		return a.first<b.first;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, B;
	cin>>N>>M>>B;
	vector<vector<int>>v(N, vector<int> (M));
	int min = 258, max = -1;
	for(int i= 0;i<N; ++i){
		for(int j= 0; j<M; ++j){
			int x;
			cin>>x;
			if(max<x){
				max = x;
			}
			if(min>x){
				min = x;
			}
			v[i][j] = x;
		}
	}
	//제일 작은것부터 큰거 맞춰보기
	vector<pair<long long int, int>> result;
	
	for(int tc= min; tc<=max; tc++){
		int block = B;
		pair<long long int, int> p(0, 0);//first가 time, second가 height

		for(int i= 0; i<N; ++i){
			for(int j= 0; j<M; ++j){
				int h = v[i][j];
				int mi = h-tc;
				if(mi>0){
					p.first+= 2 * mi;				
					block+=mi;
				}
				else if(mi<0){
					p.first += (-1) * mi;
					block += mi;
				}
			}
			
		}
		if(block>=0){
			p.second =tc;
			result.push_back(p);
		}
	}
	sort(result.begin(), result.end(), comp);
	cout<<result[0].first<<" "<<result[0].second<<"\n";
}
