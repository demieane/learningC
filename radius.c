#include <stdio.h>

// initialize two integer variables
int radius, area;
//float area, radius;

int main(){
    printf("Enter the radius:");
    scanf("%d",&radius);
    //scanf("%f",&radius);
    area=(int)3.1415 * radius * radius;
    //area= 3.1415 * radius * radius;
    printf("\n\n The area is: %d\n", area);
    //printf("\n\n The area is: %f\n", area);

    return 0;
}