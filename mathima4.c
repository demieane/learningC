#include <stdio.h>
/* Working with operators */

int main(){

    /*
    float x=9;
    int y=4;
    printf("%f\n", x);
    printf("%f\n", x/y);
    float z1, z2;
    z1 = ++x;
    z2 = x++;
    printf("%f\n", z1);
    printf("%f\n", z2);
    // To make % appear in the screen with printf you need to 
    // write %% instead of %. 
    printf(" +, -, /, %%");
    */
    int x=1, y=1;

    printf(" %d,%d", x++,++y);
    //printf("\n %d,%d", x++,++y);   
    printf("\n %d,%d", x++,y++);  
    //printf("\n %d,%d", x++,++y);
    printf("\n %d,%d", ++x,++y);
    printf("\n %d,%d", x++,++y);
    
    return 0;
}