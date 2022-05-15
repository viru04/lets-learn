#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char school;
    int class;
    
}viraj;

int main()
{
    viraj.id=1;
    viraj.marks=98;
    viraj.school='agragami school';
    viraj.class=10;
    printf("viraj got %d marks\n",viraj.marks);
    printf("viraj id is %d\n ",viraj.id);
    printf("viraj school is %c\n",viraj.school);
    printf("viraj is in %d class\n",viraj.class);
    
return 0;
}