#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argu[]){
//se declara otra lista para guardar la lista de argu, ademas se declara la variable suma.
int lista [argc], suma=0;
float promedio;
//se declaro promedio
for (int i=1; i<argc; i++){
    lista[i]=atoi(argu[i]);
}
//este for es para copiar argu a lista
for (int i=1; i<argc;i++){
    suma=suma+lista[i];
}
//el for sirve para sumar los elementos de la lista
promedio=(float)suma/(argc-1);
printf("%.2f\n",promedio);
return 0;
}
