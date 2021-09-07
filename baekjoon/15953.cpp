#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin>>T;
	for(int i= 0; i<T; ++i){
		int result = 0;
		int x, y;
		cin>>x>>y;
		if(x==0){
			x = 400;
		}
		if(x==1){
			result += 5000000;
		}
		else if(x<=3){
			result += 3000000;
		}
		else if(x<=6){
			result += 2000000;
		}
		else if(x<=10){
			result += 500000;
		}
		else if(x<=15){
			result += 300000;
		}
		else if(x<=21){
			result += 100000;
		}
		if(y==0){
			y= 400;
		}
		if(y==1){
			result += 5120000;
		}
		else if(y<=3){
			result += 2560000;
		}
		else if(y<=7){
			result += 1280000;
		}
		else if(y<=15){
			result += 640000;
		}
		else if(y<=31){
			result += 320000; 
		}
		cout<<result<<"\n";

	}
}
