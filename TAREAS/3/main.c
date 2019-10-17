#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argu[]){
float numero1;
float numero2;
float resultado;
numero1=atoi(argu[1]);
numero2=atoi(argu[2]);
resultado=numero1+numero2;
printf("%.2f\n",resultado);
resultado=numero1-numero2;
printf("%.2f\n",resultado);
resultado=numero1*numero2;
printf("%.2f\n",resultado);
resultado=numero1/numero2;
printf("%.2f\n",resultado);
}
