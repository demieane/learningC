/* only standard library files are included in <...>, other files with "..."
also header files need not be compiled*/
#include "mathima6.h"

int main(){

    int a=0; /*this is a local variable for main*/
    x=5;

    printf("\n main: a=%d,x=%d",a,x);
    f1();
    printf("\n main: a=%d,x=%d",a,x);
    f2();
    printf("\n main: a=%d,x=%d",a,x);
    printf("\n main: SIZE=%d",SIZE);
    return 0;

}

/* 
the main body of the declared functions 

void f1(){
    int a=2, x=0; //local variable names
    printf("\n f1: a=%d,x=%d",a,x);
    printf("\n f1: SIZE=%d",SIZE);
}

void f2(){
    int a=8;
    x=7;
    printf("\n f2: a=%d,x=%d",a,x);
}
*/