#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin>>n;
    int a[2*n];
    int c =0;
    for(int i=0;i<2*n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            c++;
        }
        else{
            c--;
        }
    }
    if(c==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
 
 
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
