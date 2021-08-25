#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, K;
	cin>>N>>K;
	vector<int> v(N);
	for(int i= 0; i<N; i++){
		int x;
		cin>>x;
		v[i] = x;
	}
	sort(v.begin(), v.end());
	int max = v[N-1];
	long long int l = 1, r = max, mid;
	int result = 0;
	while(1){
		if(l>r){
			break;
		}
		int sum = 0;
		mid = (l+ r)/2;
		for(int i= 0; i<N; i++){
			sum+=v[i]/mid; 
		}
		if(sum>=K){
			if(result< mid){
				result = mid;
			}
			l = mid+1;
		}
		else{
			r =mid-1;
		}
		
	}
	cout<<result;
}
