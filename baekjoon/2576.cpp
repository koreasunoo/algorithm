#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int sum = 0, min = 101;

	for(int i = 0; i<7; i++){
		int x;
		cin>>x;
		if(x%2==1){
			sum+=x;
			if(min>x){
				min = x;
			}
		}
	}
	if(min == 101){
		cout<<"-1"<<endl;
	}
	else{
		cout<<sum<<"\n"<<min<<endl;
	}


}
