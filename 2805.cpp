#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin>>N>>M;
	vector<long long int> v(N);

	for(int i = 0; i<N; i++){
		long long int x;
		cin>>x;
		v[i] = x;
	}
	sort(v.begin(), v.end());
	long long int mid, max = 0, l = 1, h = v[N-1];
	while(1){
		if(l>h){
			break;
		}
		mid = (l+h)/2;
		long long int cnt = 0;
		for(int i= 0; i<N; i++){
			if(v[i]-mid>0){
				cnt += v[i]-mid;
			}
		}
		if(cnt>=M){
			if(max<mid){
				max = mid;
			}
			l = mid+1;
		}
		else{
			h =  mid-1;
		}
		
	}
	cout<<max<<"\n";

}
