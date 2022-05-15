#include <stdio.h>

int main(void)
{
	
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a,b,c,d,x,y,S,A,M;
		scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a<0 && b>0){
			a==S;
			b==A;
			x=(A+S)/2;
			y=(A-S)/2;
			if(x*y==c || x*y==d)
			printf("%d %d",x,y);
		}
      
        else if(a<0 && c>0){
			a==S;
			c==A;
			x=(A+S)/2;
			y=(A-S)/2;
			if(x*y==b || x*y==d)
			printf("%d %d",x,y);
		}
        else if(a<0 && d>0){
			a==S;
			d==A;
			x=(A+S)/2;
			y=(A-S)/2;
			if(x*y==b || x*y==c)
			printf("%d %d",x,y);
		}
        else if(b<0 && c>0){
			b==S;
			c==A;
			x=(A+S)/2;
			y=(A-S)/2;
			if(x*y==a || x*y==d)
			printf("%d %d",x,y);
		}
        else if(b<0 && d>0){
			b==S;
			d==A;
			x=(A+S)/2;
			y=(A-S)/2;
			if(x*y==a || x*y==c)
			printf("%d %d",x,y);
		}
        else if(c<0 && d>0){
			c==S;
			d==A;
			x=(A+S)/2;
			y=(A-S)/2;
			if(x*y==a || x*y==b)
			printf("%d %d",x,y);
		}
		else
		printf("-1 -1\n");
	


	}

		
	return 0;
}
