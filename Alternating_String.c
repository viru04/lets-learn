#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,c=0,d=0,e=0;
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",s);
	    
	    for(int i=0;i<n;i++){
	        if(s[i]==s[i+1])
	        c++;
	        if(s[i]==1)
	        d++;
	        else if(s[i]==0)
	        e++;
	    }
	    
	    if(c-d>1)
	    printf("%d\n",n-c);
	    else
	    printf("%d\n",n);
	}
	return 0;
}