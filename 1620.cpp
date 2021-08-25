#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, M;
    cin>>N>>M;
    vector<string> v(N+1);
    vector<pair<string, int>> p(N+1);
    for(int i = 1; i<=N; ++i){
        string x;
        cin>>x;
        v[i] = x;
        p[i].first = x;
        p[i].second = i; 
    }
    sort(p.begin(), p.end());
    while(M--){
        string x;
        cin>>x;
        
        if(x[0] >='0' && x[0] <='9'){
            int num = 0;
            for(int i =0; i<x.length(); ++i){
                num += x[i] -'0';
                num *=10;
            }
            num/=10;
            cout<<v[num]<<"\n";
        }
        else{
          int low = 1, high = N;
          while(low<=high){
              int mid = (low + high)/2;
              if(p[mid].first == x){
                cout<<p[mid].second<<"\n";
                break;
              }
              if(p[mid].first<x){
                low = mid+1;
              }
              else{
                high = mid-1;
              }
          }
        }
    }
    return 0;
}
