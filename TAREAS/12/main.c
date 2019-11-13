#include <stdio.h>
#include <stdlib.h>
int saludos (int personas){
int total,saludo;
saludo=personas-1;
//cuando solo haya una persona no habra saludos
if(saludo==0){
    return saludo;
}
//se hara la sumatoia de los saludos
total=saludo+saludos(personas-1);
return total;
}
int main (int argc, char*argu[]){
    int resultado, personas;
    //se tomara el primer argumeto
    personas=atoi(argu[1]);
    //se lamara a la funcion
    resultado=saludos(personas);
    printf("%i\n",resultado);
    return 0;
}
