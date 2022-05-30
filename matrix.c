#include <stdio.h>

/* preprocessor directive #define
The name of the constant. Most C programmers define their 
constant names in uppercase, but it is not a requirement of 
the C Language.
#define CNAME value
*/
#define SIZE 4

int main(){

    int pin[SIZE]; //4*(4bytes) the total size of the matrix
    int sum;
    pin[0]=1;
    pin[1]=3;
    pin[2]=4;
    pin[4]=0;
    sum = pin[0]+pin[1]+pin[2]+pin[3];
    printf("%d\n",pin[100]);//this is garbage
    printf("%d+%d+%d+%d=%d\n", pin[0],pin[1],pin[2],pin[4],sum);

    // here i is declared only for the for-loop
    for (int i=0;i<5;i++){
        printf("%d\n",i);
    }
    //printf("%d\n",i); // THIS LEADS TO A COPLILATION ERROR

    int i, j;
    for (i=0,j=0; i<5 && j<5; i++,j+=2){
         printf("\ni=%d,j=%d:",i,j);
    }

    int x = 10;
    do {
        printf("hello\n");
        x-= 2;
    }
    while (x>5);

}