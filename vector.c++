// 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n],c=a[0],st=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	        if(a[i]>c)
	        {
	          c=a[i];  
	        }
	        
	        else if(a[i]<=x)
	        {
	          st=st+1;   
	        }
	       
	        
	        else if(a[i]>x)
	        {
	            if(a[i] %x ==0)
	            st=st+a[i]/x;
	            else
	            st=st+(a[i]/x)+1;
	        }
	    }
	   
	   cout<<min(st,c)<<endl;
	  
	}
	return 0;
}
