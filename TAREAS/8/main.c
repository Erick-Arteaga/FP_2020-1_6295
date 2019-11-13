#include <stdio.h>
#include <stdlib.h>
double main(int argc, char*argu[]){
    double n1;
    double n2, resultado;
    //se hace la convercion de texto a numero
    n1=atof(argu[1]);
    n2=atof(argu[2]);
    //se pregunta el primer argumento
    if(n1==1){
    //el numero uno significa que convertiremos de F a C
        resultado=n2-32;
        resultado=resultado/1.80;
    }
    //si no es uno entonces es cero y servira para pasar de C a F
    else{
        resultado=n2*1.8;
        resultado=resultado+32;
    }
    printf("%.2lf\n",resultado);
    return 0;
}
