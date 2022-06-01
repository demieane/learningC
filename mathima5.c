#include <stdio.h>

int main(){

    typeof(int) N;
    int NMAX = 0;
    int condition;
    int i;

    do {
        printf("Give a number between 2 and 20!\n");
        scanf("%d",&N);
        //NMAX-=1;
        condition = !(N>=2 && N<=20);
        printf("%d\n",condition);
        NMAX+=1;
        printf("%d\n",N);
       }
    while (condition  &&  NMAX<5);

    int pin[N]; //initialize matrix

    printf("Now fill the matrix with values...\n");
    for (i=0;i<N;i++){
        scanf("%d",&pin[i]);
    }
    
    printf("The matrix is...\n");
    printf("[");
    for (i=0;i<N;i++){
        (i<N-1) ? printf("%d,",pin[i]) : printf("%d",pin[i]);
    }
    printf("]\n");

    int xmin;

    printf("The minimum is...\n");
    xmin = pin[0];
    for (i=1;i<N;i++){
        if (pin[i]<xmin){
            xmin = pin[i];
            break;
        }
    }
    printf("xmin=%d at i=%d\n",xmin,i);
    return 0;
}