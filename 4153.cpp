#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	while(1){
		vector<int> v(3);
		int x, y, z;
		cin>>x>>y>>z;
		if(x==0) exit(0);
		v.at(0) = x; v.at(1) = y; v.at(2) = z;
		sort(v.begin(), v.end());

		x = v.at(0), y = v.at(1), z = v.at(2);
		if(pow(x,2) + pow(y,2) == pow(z,2)){
			cout<<"right"<<endl;
		}
		else{
			cout<<"wrong"<<endl;
		}
		
	}
}
