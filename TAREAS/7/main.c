#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
    float num1,num2,resultado=1;
    num1=atof(argu[1]);
    num2=atof(argu[2]);
    for(int i=0;i<num2; i++){
        resultado=resultado*num1;
    }
    printf("%.2f\n",resultado);
    return 0;
}
