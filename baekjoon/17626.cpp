#include <bits/stdc++.h>
using namespace std;
int arr[50001];
int sq(int a){
	if(arr[a]){
		return arr[a];
	}
	else{
		int min = 50000;
		int temp, count;
		int x = sqrt(a);
		if(x * x == a){
			arr[a] = 1;
			return 1;
		}
		for(int i= 1; i<=sqrt(a); ++i){
			temp = i*i;
			count = 1 + sq(a-temp);
			if(min>count){
				min = count;
			}
		}
		arr[a] = min;
		return min;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin>>N;
	cout<<sq(N)<<"\n";
	
}
