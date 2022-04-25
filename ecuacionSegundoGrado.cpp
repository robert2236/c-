//Ecuacion de segundo grado sin libreria math

#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main(){
		int a,b,c,d;
		float x1,x2;
	double res = 0.00;
    const float INCREMENTO = 0.00001;
    	cout<<"\n*****CALCULO DE ECUACIÓN DE SEGUNDO GRADO*******"<<endl;
		cout <<"\nEscribir los coeficientes de la ecuacion: aX +bX +c "<<endl;
		cout <<"Escribir el valor de AX: ";
		cin>> a;
		cout <<"Escribir el valor de BX: ";
		cin>> b;
		cout <<"Escribir el valor de C: ";
		cin>> c;
		//Calculo del discriminante
		d = b*b - 4*a*c;
		//Calculo de la raiz del discriminante
		while(res += INCREMENTO, res*res < d)
      	continue;
		//Calculo de la ecuación de segundo grado
		x1= (-b + res)/(2*a);  //Calculo de la raiz positiva
		x2= (-b - res)/(2*a);   //Calculo de la raiz negativa
	
		//Muestra los resultados:
		if (d>0){
		cout<<"\n Solucion numeros reales: "<<endl;
		cout<<"\nLa raiz positiva corresponde a: "<<x1<<endl;
		cout<<"\nLa raiz negativa corresponde a: "<<x2<<endl;
       }else {
       	cout<<"\n No se puede calcular en el campo real"<<endl;
	   }
	getch();
	return 0;
}