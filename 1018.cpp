#include <bits/stdc++.h>
#include <string>

using namespace std;

string WB[8]  = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW", 
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};


string arr[55];
	
int swb(int x, int y){
	

	int count_B = 0;
	for(int a = 0; a<8; a++){
		for(int b = 0; b<8; b++){
			if(BW[a][b] != arr[x+a][y+b]){
				count_B++;
				
			}
		}
	}
	return count_B;

}


int sww(int x, int y){
	//½ÃÀÛ ÁÂÇ¥: (x, y)

	int count_W = 0;
	for(int a = 0; a<8; a++){
		for(int b = 0; b<8; b++){
			if(WB[a][b] != arr[x+a][y+b]){
				count_W++;
				
			}
		}
	}
	return count_W;

}



int main(){
	int x, y;

	cin>>x>>y;
	
	for(int i = 0;i<x; i++){
		cin>>arr[i];
	}
	int mini = 10000;
	for(int i = 0; i<=x-8; i++){
		for(int j= 0; j<=y-8; j++){
			int temp;
			temp = min(sww(i, j), swb(i, j));
			if(temp<mini){
				mini = temp;
			}
		}
	}
	
	cout<<mini<<endl;




}
