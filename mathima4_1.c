#include <stdio.h>

int main(){

    int x=2,y=1,z;
    printf("\nx=%d,y=%d",x,y);
    printf("\n=========",x,y);

    z=(x>y);
    printf("\nx>y:%d",z);

    z=(x>=y);
    printf("\nx>=y:%d",z);

    z=(x==y);
    printf("\nx==y:%d",z);

    z=(x<y);
    printf("\nx<y:%d",z);

    z=(x<=y);
    printf("\nx<=y:%d",z);

    // only 0 is regarded as FALSE
    int k=9;
    if (k) 
        printf("\nk=9 is true");
    else 
        printf("\nk=9 is false");
    printf("\n");

    x = 1;
    y = 2;

    z=(y>x) && (x<x);
    printf("%d",z);
    // o telestis kataxwrisis epistrefei tin timh pou kataxvrhthike
    z=(x=x) && (y==y);
    printf("%d",z);

    return 0;
}