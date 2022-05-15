#include<stdio.h>
int main(){
   int i,num; 

    printf("Enter the number you want multiplication table of : ",num);
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n",num);
    
    
    for (int i=1;i<11;i++)
    {
        printf("%d x %d= %d\n",num,i,num*i);
    }
    

    return 0;
    
}