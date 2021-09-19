#include <bits/stdc++.h>
using namespace std;
int comp(int a, int b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin>>N;
	vector<int> in_1(N);
	vector<int> in_2(N);
	for(int i = 0; i<N; ++i){
		cin>>in_1[i];
	}
	for(int i = 0; i<N; ++i){
		cin>>in_2[i];
	}
	sort(in_1.begin(), in_1.end());
	sort(in_2.begin(), in_2.end(), comp);
	int result = 0;
	for(int i= 0; i<N; ++i){
		result += in_1[i] * in_2[i];
	}
	cout<<result<<"\n";
}
