#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int> v(15);
	v.at(1) = 1;
	v.at(2) = 2;
	v.at(3) = 4;
	int a;
	cin>>a;
	for(int i = 0; i<a; i++){
		int b;
		cin>>b;
		if(b<=3){
			cout<<v.at(b)<<endl;
		}
		else{
			for(int j = 4; j<=b; j++){
				if(v.at(j)==0){
					v.at(j) = v.at(j-1) + v.at(j-2) + v.at(j-3);
				}
				
			}

			cout<<v.at(b)<<endl;

		}

	}
}
