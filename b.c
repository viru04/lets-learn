#include <stdio.h>
int main()
{
    int num;
    printf("Enter the value of num:\n",num);
    scanf("%d",num);
    switch (num)
    {
    case 1:
      { 
          printf("one");
      }
      
    case 2:
    {
        printf("two");
    }
    
    case 3:{
        printf("three");
    }
    
    case 4:{
        printf("four");
    }
    
    case 5:{
        printf("five");
    }
    
    case 6:{
        printf("six");
    }
    
    case 7:{
        printf("seven");
    }
    
    case 8:{
        printf("eight");
    }
    
    case 9:{
        printf("nine");
    }
      

    default:
    {
        printf("the  number is greater than 9");
        if(num%2==0){
            printf("even");
        }
        else{
            printf("odd");
        }

    }
        
    }
    
return 0;
}