#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr_x[3];
	int arr_y[3];
	for(int i = 0; i<3; i++){
		cin>>arr_x[i]>>arr_y[i];
	}
	int x, y;
	if(arr_x[0] == arr_x[2]){
		x = arr_x[1];
	}
	else{
		x = arr_x[2] + arr_x[0] - arr_x[1];
	}

	if(arr_y[0] == arr_y[2]){

		y = arr_y[1];

	}
	else{
		y = arr_y[2] + arr_y[0] - arr_y[1];
	}
		
	cout<<x<<" "<<y<<endl;
	

}
