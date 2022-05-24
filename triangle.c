#include <stdio.h>

// initialize variables
int i,j;
//int height = 8;
int height = 190;

int main(){
    for (i=1; i<=height; i++){
        for (j=1; j<=i; j++){
            //printf("X: i=%d,j=%d ",i,j);
            printf("X");
        };
        printf("\n");
    };
    return 0;
}
