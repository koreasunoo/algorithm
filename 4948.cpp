#include <bits/stdc++.h>
#include <vector>


using namespace std;

vector<int> v;
bool era[246914];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int k = 0; k<246914; k++){
		era[k] = true;
	}
	
	era[1] = false;
	int v_size = 0;
	while(1){
		int x;
		cin>>x;
		if(x==0) break;
		v.push_back(x);
		v_size++;
	}
	for(int i = 2; i<=sqrt(246912); i++){
		if(era[i] == true){
			for(int j = 2*i; j<=246914; j+=i){
				era[j] = false;
			}
		}
	}	
	for(int i = 0; i<v_size; i++){
		int count = 0;
		for(int j  = v.at(i)+1; j<=v.at(i)*2; j++){
			if(era[j]){
				count++;
			}
		}
		cout<<count<<endl;
	}

}
