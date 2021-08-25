#include <iostream>
#include <vector>

using namespace std;

int main(){

	ios::sync_with_stdio(0);

	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;
	
	vector<int> res(N, 1);
	int arr[N][2];
	for(int i = 0; i<N; i++){
		cin>>arr[i][0]>>arr[i][1];

	}
	
	for(int i= 0; i<N;i++){
		for(int j = 0; j<N; j++){
			if(arr[i][0] < arr[j][0] and arr[i][1]< arr[j][1]){
			
				res.at(i) ++;
			
			}
		}
	}
	for(int i = 0; i<N; i++){
		cout<<res.at(i)<<" ";
	}


}
