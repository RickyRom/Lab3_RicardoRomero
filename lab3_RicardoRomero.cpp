#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

using std::string;

int* crearArreglo(int);

void factorizacion();

int main() {
	int opcion;
	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Ejercicio 1"<<endl;
		cout<<"2.- Ejercicio 2"<<endl;
		cout<<"3.- Ejercicio 3"<<endl;
		cout<<"4.- Salir"<<endl;
		cin>>opcion;
		switch(opcion) {
			
			case 1:
				break;
			case 2:
				factorizacion();
				break;
			case 3: 
				break;
			case 4:
				cout<<"TENGA UN BUEN DIA!"<<endl;
				break;	
		}

	}while(opcion != 4);				

}

void factorizacion() {
	string chain;
	string a,b,c;
	int pos = 0 ,cont = 0;
	int pos2 = 0;
	int A,B,C;
	cout<<"Ingrese el Polinomio: "<<endl;
	cin>>chain;

	for(int i = 0; i < chain.length(); i++) {
		if((chain[i] == 'x') && (cont == 0)){
				pos = i;

				cont++;
		}

		if ((chain[i] == 'x') && (cont == 1)) {
			pos2 = i;

			cont++;
		}

	}

	for(int i = 0; i < pos; i++) {
			
		a += chain[i];
	}

	for(int i = 0; i < pos2; i++) {
		
		b += chain[i];
	}

	for(int i = pos2; i < chain.length(); i++) {
		
		c += chain[i];
	}
	
	cout<<a<<endl;

}

//crear arreglo de enteros
int* crearArreglo(int size) {
	int* retvalue = new int [size];
	return retvalue;
}


void merge(int arre[], int l, int f, int s) {
		srand(time(NULL));
		int random = 1000 + rand()%(1000 - 1);
		
		int i, j, k;
		int num1 = f - l + 1;
		int num2 = s - f;
		int I[num1];
		int D[num2];

		for(i = 0; i < num1; i++) {
			I[i] = arre[l + i];	
		}
		for(j = 0; j < num2; j++) {
			D[j] = arre[f + 1 + j];
		}
		i = 0;
		j = 0;
		k = l;

		while(i < num1 && j < num2) {
			if (I[i] <= D[j]) {
				arre[k] = I[i];
				i++;
			}else{
				arre[k] = D[j];
			}
			k++;
		}

		while(i < num1) {
			arre[k] = I[i];
			i++;
			k++;
		}



}

