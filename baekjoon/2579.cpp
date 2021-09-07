#include <bits/stdc++.h>
using namespace std;
int result[301] = {0, };
int score[301] = {0, };
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin>>N;
	for(int i = 1; i<=N; ++i){
		int x;
		cin>>x;
		score[i] = x;
		
	}
	result[1] = score[1];
	result[2] = score[1] + score[2];
	result[3] = max(score[1] + score[3], score[2] + score[3]);
	for(int i= 4; i<=N; ++i){
		result[i] = max(result[i-3] + score[i] + score[i-1], result[i-2] + score[i]);
	}
	cout<<result[N]<<"\n";

}
