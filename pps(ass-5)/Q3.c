#include <stdio.h>
#include<math.h>
 int main()
 {
 	char operators;
 	float a,b; 
 	
 	scanf("%c",&operators);
 	 printf("Enter two numbers\n");
 	scanf("%f %f",&a,&b);
 	switch (operators)
 	{
 		case '+':
 			printf("%f + %f = %f \n",a,b,a+b);
 		    break;
 		case '-':
 			printf("%f - %f = %f \n",a,b,a-b);
 		    break;
 		case '*':
 			printf("%f * %f = %f \n",a,b,a*b);
 		    break;
 		case '/':
 			printf("%f / %f = %f \n",a,b,a/b);
 		    break;	

 		default :
         {
 			printf("Error! Enter valid operator\n");
         }
 	}
 	return 0;
 }