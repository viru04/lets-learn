#include <stdio.h>
#include<stdlib.h>

int update(int *a,int *b) {
    int t;
    t=(*a)+(*b);
    *b= abs(*a-*b);
    *a=t;    
}

int main() {
    int a=4, b=5;
    int *pa = &a, *pb = &b;
    
    //scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n",a,b);
    

    return 0;
}