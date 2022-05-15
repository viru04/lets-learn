#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c, d;
        int count = 0;
        while(c<=max(a,b) && d<=max(a,b))
        {
            c=min(a,b);
            
            for(int i=2;i<=min(a,b);i++)
            {
                d=i+1;
                if(c%i==0 && d%i==0)
                {
                    count=1;
                    break;
                }
                else
                {
                    continue;
                }
            }
            c++;
        
        }
        if (count == 1)
             cout<<c<<" "<<d<<endl;
            

            else 
           cout << "-1" << endl;
    }
}