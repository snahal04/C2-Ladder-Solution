#include <iostream>
using namespace std;
 
int main() {
	
	int t;
	 int k,s;
	cin>>t;
	while(t--)
	{
	    int n;
	    
	    cin>>n;
	   
	    if((n%3)==0 || (n%3)==1)
	    {
	        k=n/3;
	        s=(n-(2*k));
	        cout<<s<<" "<<k<<endl;
	    }
 
	    else if((n%3)==2)
	    {
	        k=n/3;
	        k++;
	        s=(n-(2*k));
	        cout<<s<<" "<<k<<endl;
	    }
	}
	return 0;
}
