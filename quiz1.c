#include<stdio.h>
/* exam no.
1= maths and science
2=science
3=maths*/
int exam;
int main(){

printf("Enter the exam you have passsed in : \n");
scanf("%d", &exam);



if (exam==1)
{
    printf("congragulations you have won award of $45");
}
else if(exam==2)
{
   printf("congragulations you have won award of $15"); 
}

else{
    printf("congragulations you have won award of $15");
}


return 0;

}
