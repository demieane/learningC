#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000 /* symbolic constant for static memory allocation */

int main(){

    int mat[SIZE];
    int mat2[5] = {1,2,3,4,5};
    int N = 100;

    // C is a row-major language
    //int A[2][5] = {{0,1,2,3,4},{5,6,7,8,9}}; // {{first line},{second line}}
    int A[2][5] = {0,1,2,3,4,5,6,7,8,9}; // {{first line},{second line}}
    double B[8][10];

    int C[2][2][2] = {1,2,3,4,5,6,7,8};

    for (int i=0;i<2;i++){
        for (int j=0;j<5;j++){
            printf("%d,",A[i][j]);
        }
        /* commands */
        printf("\n");
    }

    printf("This is the 3Dimensional matrix\n");
    //int cnt = 0;
    for (int k=0;k<2;k++){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                //C[i][j][k]=cnt;
                //cnt += 1; 
                printf("C[%d][%d][%d]=%d\n",i,j,k,C[i][j][k]);
            }
            printf("\n");
        }
        /* commands */
        printf("New dimension..\n");
    }


    srand(9);//this initializes the random number generator for rand();
    printf("%d\n",time(NULL));
    srand(time(NULL)); // for random number generation initialization seed is always different

    unsigned int x=rand()%100; //[0,99] rand() modulo 100, to upoloipo akeraias diairesis me to 100 (last two digits)
    unsigned int y=10+rand()%91; //[0,90] + 10


    printf("x=rand(): %d\n",x);
    printf("y=rand(): %d\n",y);

    return 0;
}