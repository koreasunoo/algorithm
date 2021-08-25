#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int M, N, min = 10001;
	long long int sum = 0;
	cin>>M>>N;
	if(M==1 and N==1){
		cout<<"-1"<<endl;
		exit(0);
	}
	if(M<=2){
		min = 2;
		sum+=2;
		M = 3;
	}
	if(M%2==0){
		M++;
	}
	if(N%2==0){
		N--;
	}
	int count;
	for(int i = M; i<=N;i+=2){
		
		count=0;
		for(int j = 2; j<i; j++){
			count++;
			if(i%j==0){
				break;
			}
			if(count==i-2){
				sum += i;
				if(min>i){
					min = i;
				}
			}
		}
	}
	if(min ==  10001){
		cout<<"-1";
		exit(0);
	}
	cout<<sum<<endl<<min<<endl;


}
