#include <stdio.h>

// initialize variables and functions
int a = 100;
int a,b,c = 200;
int num = 33 ;
int multiplyFunc(int x, int y);

int main(){
    
    printf("Value of a -> %d\n", a);
    printf("Value of b -> %d\n", b);
    printf("Value of c -> %d\n", c);
    printf("Enter a number between 1 and 100:  ");
    scanf("%d",&a);
    printf("Enter another number:  ");
    scanf("%d",&b);

    c=multiplyFunc(a,b);
    printf("c=%d\n",c);
    printf("Address of a -> %p\n", &a);
    printf("Address of b -> %p\n", &b);
    printf("Address of c -> %p\n\n", &c);

    //printf("Address of a -> %lld\n", &a);
    //printf("Address of b -> %lld\n", &b);
    //printf("Address of c -> %lld\n", &c);


    return 0;
}

int multiplyFunc(int x, int y){
    return(x*y);
}