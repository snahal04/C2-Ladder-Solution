#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int max_ele = *max_element(a,a+n); // Gives the value of max element
    int min_ele = *min_element(a,a+n);
    
    // Given the array has distinct elements
    // So will find the position of max_ele and min_ele
    auto itr_max = find(a, a + n, max_ele);// given index 0,1,2,3..
    auto itr_min = find(a, a + n, min_ele);
    // cout<<distance(a,itr_max)<<endl;
    
    int distance_max_ele = distance(a,itr_max) + 1;
    int distance_min_ele = distance(a,itr_min) + 1;
    // cout<< distance_max_ele<<" "<<distance_min_ele<<endl;
    int a1[3];
    a1[0] = max(distance_max_ele,distance_min_ele);
    a1[1] = (n - min(distance_max_ele,distance_min_ele)) + 1;
    a1[2] = min(distance_max_ele,distance_min_ele) + (n - max(distance_max_ele,distance_min_ele) + 1);
    sort(a1,a1+3);
    cout<<a1[0]<<endl;
    
    
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
