#include <stdio.h>

int main(){
    int a,b,c;
    printf("Dwse treis akeraious arithmous\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    int x1, x2, x3;
    if (a<b && a<c){
        x1 = a;
        if (b<c){
            x2 = b;
            x3 = c;
        }
        else{
            x2 = c;
            x3 = b;
        }
    }  
    else if (b<a && b<c){
        x1 = b;
        if (a<c){
            x2 = a;
            x3 = c;
        }
        else{
            x2 = c;
            x3 = a;
        }
    }
    else{
        x1 = c;
        if (a<b){
            x2 = a;
            x3 = b;
        }
        else{
            x2 = b;
            x3 = a;
        }
    }
    printf("x1=%d < x2=%d < x3=%d\n",x1,x2,x3);
        
        


}