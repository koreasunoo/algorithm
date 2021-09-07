#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int M;
	cin>>M;
	vector<int> v(21);
	for(int i = 0; i<M; ++i){
		string x;
		cin>>x;
		if(x=="add"){
			int num;
			cin>>num;
			v[num] = 1;
		}
		else if(x=="remove"){
			int num;
			cin>>num;
			v[num] = 0;
		}
		else if(x=="check"){
			int num;
			cin>>num;
			if(v[num] == 0){
				cout<<"0\n";
			}
			else if(v[num] == 1){
				cout<<"1\n";
			}
		}
		else if(x=="toggle"){
			int num;
			cin>>num;
			if(v[num] == 1){
				v[num]=0;
			}
			else if(v[num] == 0){
				v[num]=1;
			}
		}
		else if(x=="all"){
			for(int j= 1; j<=20; ++j){
				v[j] = 1;
			}
		}
		else if(x=="empty"){
			for(int j = 1; j<=20; ++j){
				v[j] = 0;
			}
		}
	}

}
