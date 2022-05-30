#include <stdio.h>

int main(){

    const int x=100;
    int y;
    printf("Initially y was %d.\n",y);
    printf("But if you give me ");
    scanf("%d", &y);
    printf("Then y becomes %d.\n",y);
    printf("Finally, the constant is: %d and the variable: %d", x, y);
    return 0;

}