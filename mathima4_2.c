#include <stdio.h>

int main(){

    int x=1;
    int y=-2;
    if (x==y){
        // You need to add curly brackets to include more
        // than one commands! The curly brackets are used to 
        // denote a block of code.
        printf("The statement is correct!\n");
        printf("The statement is correct!\n");
    }
    else if (x<y){
        printf("x<y!\n"); 
    }
    else{
        printf("mpanpa\n");
    }

    //This is just a block of code that is executed.
    if (x>y);
    {
        // You need to add curly brackets to include more
        // than one commands! The curly brackets are used to 
        // denote a block of code.
        printf("Just within a block of code denoted by {....}\n");
    }

    // a more compacy way to write an if-else statement
    (x>y) ? (printf("isxuei\n")) : (printf("den isxuei\n")); 
    int z = (x<y) ? 0 : 1;

    printf("%d\n",z);
    printf("%d",printf("%d",z));
    return 0;
}