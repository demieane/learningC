#include <stdio.h>

#define SIZE 5

// declare function prototypes
void swap(int *ptra, int *ptrb);

int main(){

    int *p; //integer 4bytes
    double *ptr; //real number

    int x1;
    double x2;
    float x3;
    printf("size of int: %d\n",sizeof(x1));
    printf("size of double:%d\n",sizeof(x2)); //double precision
    printf("size of float:%d\n",sizeof(x3)); //single precision


    //===============
    int a;
    int b;
    int *ptra; // DECLARE, request memory from the system, and the system assigns it 
    int *ptrb; // DECLARE, request memory from the system, and the system assigns it

    ptra = NULL;// initialize ptra is pointing to nowhere, NULL is the same as 0
    ptrb = NULL;// initialize ptrb is pointing to nowhere, NULL is the same as 0

    ptra=&a;
    ptrb=&b;

    printf("give an integer...\n a=");
    scanf("%d",&a);
    printf("give an integer...\n b=");
    scanf("%d",&b);

    printf("a is %d, b is %d\n", a, b);

    //swap(&a,&b);
    swap(ptra,ptrb);

    printf("a is %d, b is %d\n", a, b);


    return 0;
}

void swap(int *ptra, int *ptrb){

    int k; //variable that assists the swap
    k = *ptra;
    *ptra=*ptrb;
    *ptrb = k;
}