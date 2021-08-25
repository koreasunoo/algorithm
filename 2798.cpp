#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M,ans, min = 9999999;
	cin>>N>>M;
	vector<int> v(N);
	for(int i = 0; i<N; i++){
		cin>> v.at(i);
	}
	int sum;
	for(int i = 0; i<N-2; i++){
		for(int j = i+1; j<N-1; j++){
			for(int k = j+1; k<N; k++){
				sum = v.at(i) + v.at(j) + v.at(k);
				if(sum>M){
					continue;
				}
				if(M-sum<min){
				
					min = M-sum;
					ans = sum;
				}
			}
		}
	}
	cout<<ans<<endl;
}
