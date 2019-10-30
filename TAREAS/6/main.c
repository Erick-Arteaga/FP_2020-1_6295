#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
    int resultado;//se va a imprimir
    int argui[argc];//se guardan los valores enteros
    for(int i=1; i<argc; i++){
        resultado=1;
    for(int j=1; j<argc; j++){
        argui[j]=atoi(argu[j]);
        resultado=resultado*argui[j];
    }
    //esto sirve para excluir a argu[i]
    resultado=resultado/argui[i];
    printf("%i\n",resultado);
    }
    return 0;
}
