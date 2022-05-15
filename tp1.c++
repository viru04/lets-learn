#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   // cout<<n/2<<endl;
    int b[10],j=0,r=0;
    while(n!=0)
    {
        
        r=n%2;
        n=n/2;
        b[j]=r;
        j++;
    }
    
    for(int i=j-1;i>=0;i--)
    {
      cout<<b[i];
    }
    return 0;
}