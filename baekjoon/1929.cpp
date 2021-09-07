#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int M, N;
	cin>>M>>N;
	if(M<=2) M = 3;
	if(M%2==0) M++;
	if(N%2==0) N--;
	int count;
	int res_count = 0;
	for(int i = M; i<=N;i+=2){
		count=0;
		int sqi = (int)sqrt(i);
		for(int j = 2; j<=sqi; j++){
			count++;
			if(i%j==0) break;
			if(count == sqi-1) cout<<i<<endl;
		}
	}

}
