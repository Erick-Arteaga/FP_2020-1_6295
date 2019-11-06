#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
    float num1,num2,resultado=1;
//se convertira el texto a numero
    num1=atof(argu[1]);
    num2=atof(argu[2]);
//el for servira para llegar al resultado final
    for(int i=0;i<num2; i++){
        resultado=resultado*num1;
    }
    printf("%.2f\n",resultado);
    return 0;
}
