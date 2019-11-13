#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argu[]){
    //El siguiente numD es la cantidad de digitos
    int numD;
    //Vamos a utilizar strlen para saber cuantos caracteres va  tener.
    numD=strlen(argu[1]);
    char arguc[numD];
    int resultado=0;
    int digitos[numD];
    for (int i=0;i<numD; i++){
    //se guarda el numero en la lista
    arguc[i]=argu[1][i];
    digitos[i]=atoi(&arguc[i]);
    //se sumaran cada digito por separado

    resultado=resultado+digitos[i];
    }
printf("%i\n",resultado);
return 0;
}
