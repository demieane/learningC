#include <stdio.h>

int main(){

    /* declaration */
    int x = 1;
    int y = 2;
    float a = 1.0;
    float b = 1.0;

    printf("(%d+%d)/2=%d\n",x,y,(x+y)/2);
    printf("(%f+%f)/3=%12.10f\n",a,b,(a+b)/3);

    return 0;
}