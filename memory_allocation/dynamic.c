#include <stdio.h>
#include <stdlib.h> //malloc() & free() live here :)

int main(){

    int *p1;

    p1 = malloc(1*sizeof(int)); 
    //the pointer redirects me to the part of the memory 
    //that was allocated from malloc

    if (!p1) //(p1 == NULL)
    {
        printf("malloc failed");
        exit(0); // this terminates the program
    }

    *p1 = 4; //give value to the variable that is accessible only via  
    // the pointe
    printf("xmmm...%d\nDwse enan arithmo\n", *p1);
    scanf("%d",p1);
    printf("xmmm...%d\n", *p1);
    free(p1); // always free the space 

    return 0;
}