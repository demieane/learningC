#include <stdio.h>

int main(){

    printf("Size of character in bytes = %d\n", sizeof(char));
    printf("Size of short integer in bytes = %d\n", sizeof(short));
    printf("Size of integer in bytes = %d\n", sizeof(int));
    printf("Size of long integer in bytes = %d\n\n", sizeof(long));

    printf("Size of unsigned character in bytes = %d\n", sizeof(unsigned char));
    printf("Size of unsigned short integer in bytes = %d\n", sizeof(unsigned short));
    printf("Size of unsigned integer in bytes = %d\n", sizeof(unsigned int));
    printf("Size of unsigned long integer in bytes = %d\n\n", sizeof(unsigned long));

    printf("Size of float in bytes = %d\n", sizeof(float));
    printf("Size of double in bytes = %d\n", sizeof(double));
    printf("Size of long double in bytes = %d\n", sizeof(long double));

    return 0;
}




