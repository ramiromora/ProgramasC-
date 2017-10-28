//Empleo de bloques de sentencias
#include <iostream>
#include <stdlib.h> 
using namespace std;
int main(){
	int numero,contador,sumador; 
	sumador = contador = 0;
	do {
		cout << "Introduzca un numero entre 0 y 500: "; 
		cin >> numero;
	} while(numero < 0 || numero > 500);
	if(numero <= 492) {
		for(numero; numero < 500; numero += 8) {
			sumador = sumador + numero;
			contador = contador + 1; 
			cout << numero << " , ";
		}
	}
	cout << "\nEsta es la suma: " << sumador << endl;
	cout << "El numero total hasta 500 tomados de a ocho es: " << contador << endl;
	return 0;
}
