#include <bits/stdc++.h>
using namespace std;
int N, S, result = 0;
int arr[20];
void subset(int index, int sum){
	sum += arr[index];
	if(index>=N) return;
	if(sum==S) result++;
	subset(index+1, sum);
	subset(index+1, sum-arr[index]);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>N>>S;
	for(int i= 0; i<N; ++i){
		int x;
		cin>>x;
		arr[i]= x;
	}
	subset(0, 0);
	
	cout<<result<<"\n";
}
