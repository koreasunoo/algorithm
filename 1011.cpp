#include <bits/stdc++.h>
#include <vector>

using namespace std;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
		int x, y, count = 0, dis;
		cin>>x>>y;
		if(y-x == 1){
			cout<<"1"<<endl;
			continue;
		}
		else if(y-x==2){
			cout<<2<<endl;
		}
		dis = y-x-2;
		count += 2;

		int index=2;
		int res_count = 0;
		while(1){
			dis-=index;
			res_count ++;

			if(dis<=0){
				count+= res_count;
				break;
			}
			dis-=index;
			res_count++;
			if(dis<=0){
				count += res_count;
				break;
			}
			index++;
			
		}
		cout<<count<<endl;

	}
}
