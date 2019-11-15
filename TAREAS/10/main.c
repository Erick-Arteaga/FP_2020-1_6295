#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//se calcularan las raices positivas
void ecuacionR(double a, double b, double c){
	double x1,x2, partes;
	x1=(-b+(sqrt(b*b-4*a*c)))/2*a;
	x2=(-b-(sqrt(b*b-4*a*c)))/2*a;
	printf("%.2lf\n",x1);
	printf("%.2lf\n",x2);
}
//esta funcion sera para sacar las raices imaginarias
void raicesI(double a, double b, double c){
	double parte;
	parte=sqrt(b*b-4*a*c)/2*a;
	double x11,x12,x21,x22;
	//esta es la primer x
	x11=-b/(2*a);
	x12=parte/(2*a);
	//esta sera la segunda x
	x21=-b/(2*a);
	x22=-parte/(2*a);
	if (b==0){
    	x11=0; x21=x11;
	}
}
//esta sera solo si existe una sola solucion
void ecuacionesU(double a, double b){
	double xU;
	xU=-b/(2*a);
	printf("%.2lf\n",xU);
}
int main (int argc, char* argu[]){
	double a,b,c;
	a=atof(argu[1]); b=atof(argu[2]); c=atof(argu[3]);
	double determinante;
	determinante=pow(b,2);
	determinante=determinante-(4*a*c);
	if(determinante==0){
    	ecuacionesU(a,b);
	}
	else{
    	//se usara las raices reales
    	if(determinante>0){
		ecuacionR(a,b,c);
		}
		else{
		raicesI(a,b,c);
		}
	}	
	return 0;
}
