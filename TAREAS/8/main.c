#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){
    int n1;
    float n2, resultado;
    //se hace la convercion de texto a numero
    n1=atoi(argu[1]);
    n2=atoi(argu[2]);
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
    printf("%.2f\n",resultado);
    return 0;
}
