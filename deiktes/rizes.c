#include <stdio.h>
#include <math.h>
#include <time.h>

int rizes(float a, float b, float c, float *x1, float *x2);

int main(){

    float a=1;
    float b=-3;
    float c=2;
    float riza1,riza2;
    int plithos;

    plithos=rizes(a,b,c,&riza1,&riza2);

    printf("plithos: %d\n",plithos);
    printf("x1: %f\n",riza1);
    printf("x2: %f\n",riza2);

    time_t curtime; // this is a specific datatype
    time(&curtime);
    printf("Current time = %s", ctime(&curtime));
    printf("\a \a \a \a \a");

    return 0;
}

int rizes(float a, float b, float c, float *x1, float *x2){

    float D;

    D = b*b - 4*a*c;
    if (D<0) {
        return 0;
    }
    else if (D == 0){
        *x1 = -b/(2*a);
        *x2 = *x1;
        return 1;
    } 
    else{
        *x1 = (-b + sqrt(D))/(2*a);
        *x2 = (-b - sqrt(D))/(2*a);
        //printf("x1=%f\n",*x1);
        return 2;
    }
}