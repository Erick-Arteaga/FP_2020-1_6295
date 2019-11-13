#include <stdio.h>
#include <stdlib.h>
double raiz(double num,double tolerancia,double resultado){
    double division, diferencia;
    division=num/resultado;
    //la diferencia se hara con el valor absoluto
    diferencia=diferencia>0? diferencia:-diferencia;
    //si la diferencia es mayor no regresara
    if(diferencia<=tolerancia){
        return resultado;
    }
    else{
        resultado=(resultado+division)/2;
        //regresara a funcion cn el candidato
        return raiz(num,tolerancia, resultado);
    }
}
int main (int argc, char *arg[]){
    double num,tolerancia,resultado;
    //se van a guadar los argumentos
    num=atof(arg[1]);
    tolerancia=atof(arg[2]);
    resultado=atof(arg[3]);
    //a continuacion se guardara el resultado
    resultado=raiz(num,tolerancia,resultado);
    printf("%lf\n",resultado);
}
