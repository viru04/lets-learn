#include<stdio.h>
int main(){

 for(int j=0;j<8;j++)
 { int num;
    printf("Enter the number\nenter 0 to exit\n");
scanf("%d", &num);
if(num==0){
    goto end;}

 }
end:
return 0;
}