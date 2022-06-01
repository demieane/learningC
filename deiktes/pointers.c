#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 

    x = *p

    &x = p

*/


int main(){

    int x; //direct access
    int *ptr; /* pointer initialization */

    printf("size of integer = %ld\n",sizeof(int));
    printf("size of double  = %ld\n",sizeof(double));

    
    printf("Before initialization...x=%d\t  *ptr=%d\t   &x=%d   ptr=%d\n",x,*ptr,&x,ptr);
    ptr=&x; //now the address of x is the same as the pointer p
    x=5; 
    printf("x=%d\t  *ptr=%d\t   &x=%d   ptr=%d\n",x,*ptr,&x,ptr);
    *ptr=8; // indirect access
    printf("x=%d\t  *ptr=%d\t   &x=%d   ptr=%d\n",x,*ptr,&x,ptr);
    x=9;
    printf("x=%d\t  *ptr=%d\t   &x=%d   ptr=%d\n",x,*ptr,&x,ptr);
}