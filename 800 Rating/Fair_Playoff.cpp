#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int g1 = max(a,b);
    int g2 = max(c,d);
    int g1_s = min(a,b);
    int g2_s = min(c,d);
    if(g2_s < g1 && g1_s < g2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
