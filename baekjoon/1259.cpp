#include <bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		string x;
		cin>>x;
		if(x=="0") break;
		int a = x.length(), count=0; 
		if(a%2==1){
			for(int i = 0; i<(a-1)/2; i++){
				if(x[i] == x[a-i-1]){
					count++;
					
				}
			}
			if(count==(a-1)/2) puts("yes");
			else puts("no");
			
		}
		else{
			for(int i= 0; i<a/2; i++){
				if(x[i] == x[a-i-1]){
					count++;
				}
			}
			if(count==a/2) puts("yes");
			else puts("no");
			
		}

	}
}
