#include <iostream>
using namespace std;
struct Datos {
	int anio;
	int mes;
	int dia;
};

// Prototipos de funcion
void Recibe( Datos &s);
void Imprime1( Datos &t);
void Imprime2( Datos Nacimiento);

int main(){ 			
	Datos Elisa;			// Declaracion de Elisa como tipo Datos
	Recibe(Elisa);		// Se reciben los datos de Elisa mediante la funcion Recibe
	// Se imprimen los datos de Elisa desde la funcion Imprime1
	cout <<"\nLa fecha de nacimiento de Elisa desde Imprime1: "<<endl;
	Imprime1(Elisa);
	// Se imprimen los datos de Elisa desde la funcion Imprime2
	cout <<"\nLa fecha de nacimiento de Elisa desde Imprime2:" <<endl;
	Imprime2(Elisa);
	// Se imprimen los datos de Elisa desde main 
	cout <<"\nLa fecha de nacimiento de Elisa desde main." <<endl;
	cout <<Elisa.dia<<"/" <<Elisa.mes<< "/" << Elisa.anio << endl << endl; 
	return 0;
}

void Recibe(Datos &s){
	cout << "\nIntroduzca el anio de nacimiento: " <<endl;
	cin >> s.anio;
	cout << "\nIntroduzca el mes de nacimiento: " <<endl;
	cin >> s.mes;
	cout <<"\nIntroduzca el dia de nacimiento: " <<endl; 
	cin >> s.dia;
}

void Imprime1(Datos &t){
	cout <<t.dia <<"/"<<t.mes<<"/"<<t.anio<<endl;
	return;
}

void Imprime2(Datos Nacimiento){ 
	cout << Nacimiento.dia <<"/" <<Nacimiento.mes<<"/"<< Nacimiento.anio << endl;
	return;
 }
