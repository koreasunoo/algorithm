#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;
	if(N<10 and N%2==1){
	
		cout<<"0"<<endl;
		exit(0);
	}
	for(int i= 1; i<N; i++){
		int sum = i;
		int contrast = i;
		int x = i;
		stringstream temp;
		temp<<i;
		string a = temp.str();
		int si = a.size();
		for(int j = 0; j<si; j++){
			sum += x%10;
			x /=10;
			if(x ==0){
				break;
			}
		}
		if(sum==N){
			cout<<contrast<<endl;
			exit(0);
		}

	}
	cout<<"0"<<endl;
}
