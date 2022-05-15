#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int a=n,b=1;
        int ans=3*(n-1);
        if(n%2==0)
        {
            for(int i=1;i<=(n/2);i++)
            {
                if(x==a || x==b || y==a || y==b)
                {
                    cout<<ans<<endl;
                    break;
                }
                a--;
                b++;
                ans=ans+2;
               
            }
        }
        else
        {
            if(x==(n+1)/2 && y==(n+1)/2)
            {
                cout<<n*n-1<<endl;
            }
            else{
                  for(int i=1;i<=(n/2);i++)
            {
                if(x==a || x==b || y==a || y==b)
                {
                    cout<<ans<<endl;
                    break;
                }
                a--;
                b++;
                ans=ans+2;
               
            }
            }
          
             

        }
    }
}