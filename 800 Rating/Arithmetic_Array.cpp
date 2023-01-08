#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int a[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum = sum + a[i];
    }
    float c = sum/n;
    if (c>1){
        cout<<sum-n<<endl;
    }
    else if(c<1){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
