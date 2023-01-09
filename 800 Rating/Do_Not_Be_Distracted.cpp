#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k;cin>>k;
    string str;cin>>str;
    unordered_map<char,int> m;
    if(k<=2) cout<<"YES"<<endl;
    else {
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        int count =1;
        int flag =0;
        for(int i =1;i<str.length();i++){
            if(str[i]!=str[i-1]){
                if(m.at(str[i-1])==count){
                    count = 1;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else{
                ++count;
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
