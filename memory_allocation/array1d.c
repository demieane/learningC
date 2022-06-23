#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p; //initialize pointer to matrix
    int size;

    printf("Dwse megethos pinaka \n");
    scanf("%d",&size);
    p = malloc(sizeof(int)*size);

    if (!p){
        printf("malloc failed\n");
        exit(0);
    }

    for (int i=0;i<size;i++){
        p[i]=i;//give some values
        printf("p[%d]=%d,\t",i,p[i]);
    }
    printf("\n");
    for (int i=0;i<size;i++){
        //p[i]=i;//give some values
        printf("p[%d]=%d,\t",i,*(p+i));
    }

    free(p);

    return 0;
}