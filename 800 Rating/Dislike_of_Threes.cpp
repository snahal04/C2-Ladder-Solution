#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k;cin>>k;
    int c =0;
    int i =0;
    while(c!=k){
        i++;
        if(i%3==0){
            continue;
        }
        else{
            if(i%10 == 3){
                continue;
            }
            else c++;
        }
        
    }
    cout<<i<<endl;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
