#include <stdio.h>

#define SIZE 10

int main(){

    int pinakas[SIZE];//this is a pointer that is fixed in its address
    int *p1;
    int *p2;

    double A[SIZE];
    double *pA;
    pA=&A[0];

    p1=pinakas;
    p2=&pinakas[0];

    printf("p1:%d\t p2:%d\n",p1,p2);
    printf("pA:%d\n",pA);

    for (int i=0;i<SIZE;i++){
        printf("address of &pinakas[%d] is %d\n",i,&pinakas[i]);
    }

    for (int i=0;i<SIZE;i++){
        printf("\nStoixeio:%d,Dieuthinsi Thesis Mninis: %d",i,p1);
        p1++;
    }

    printf("\n");
    for (int i=0;i<SIZE;i++){
        printf("\nStoixeio:%d,Dieuthinsi Thesis Mninis: %d",i,pA);
        pA+=2;
    }


    return 0;
}