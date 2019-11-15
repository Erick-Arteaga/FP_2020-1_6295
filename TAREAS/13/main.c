#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argu[]){
//se hace la lista de enteros
int numeros[argc-1];
int i=0, j=1, numero;
while(i<argc-1){
    numero=atoi(argu[j]);
    numeros[i]=numero;
    i++;
    j++;
    }
    int temporal;
    for(i=1;i<argc-1;i++){
        for(j=0;j<argc-1-i;j++){
        //se intercambian numeros de la forma adecuada de menor a menor
            if(numeros[j]>numeros[j+1]){
            //se guarda en temporal
                temporal=numeros[j];
                numeros[j]=numeros[j+1];    
                numeros[j+1]=temporal;
            }
        }
    }
    //con este for se imprime
    for(int i=0;i<argc-1;i++){
        printf("%i\n",numeros[i]);
    }
}
