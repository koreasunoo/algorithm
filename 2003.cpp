#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int M, N;
	cin>> M>>N;
	vector<int> v(M);
	for(int i= 0; i< M; i++){
	
		cin>> v.at(i);
	}
	int l = 0, r = 0,sum = 0, count = 0;
	while(1){
		if(sum >= N){
			sum-=v.at(l);
			l++;
		}
		else if(r>=M){
			break;
		}
		else{
			sum += v.at(r);
			r++;
		}
		if(sum==N) count++;
		
	}
	cout<<count;
}
