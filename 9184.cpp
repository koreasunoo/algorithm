#include <bits/stdc++.h>
#include <vector>
using namespace std;
int arr[101][101][101];
int w(int a, int b, int c){
	int x= a+50, y =b+50, z =c+50;
	if(arr[x][y][z]){
		return arr[x][y][z];
	}
	
	if(a<=0 or b<=0 or c<=0){
		return 1;
	}
	else if(a>20 or b>20 or c> 20){
		return w(20, 20, 20);
	}
	else if(a<b and b<c){
		arr[x][y][z] = w(a, b, c-1) + w(a, b-1, c-1)- w(a, b-1, c);
		return arr[x][y][z];
	}
	else{
		arr[x][y][z] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);

		return arr[x][y][z];
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	while(1){
		cin>>a>>b>>c;
		if(a==-1 and b==-1 and c==-1){
			break;
		}
		printf("w(%d, %d, %d) = %d\n", a, b, c, w(a,b,c));
	}
}
