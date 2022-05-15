#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n],c=0,d=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	
	        b[i]=a[i];
	        
	    }
	    
	    sort( a, a+n);
	     for(int i=0;i<n-1;i++)
	    {
	        if(a[i]!=b[i] && a[i+1]!=b[i+1])
	        {
	            
	            c++;
	            
	           
	        }
	       
	        
	        
	       
	        
	        
	       
	    }
	    if(c==1)
	    cout<<"YES"<<endl;
	    else if(c==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   
	    
	}
	return 0;
}
