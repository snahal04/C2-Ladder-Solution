#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int a[n];
    double sum =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a,a+n);
    sum = sum - a[n-1];
    // cout<<sum<<endl;
    
    double avg = a[n-1]+(sum/(n-1));
    cout<<fixed<<setprecision(6)<<avg<<endl;
    // cout<<avg<<endl;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
