#include <iostream>
#include <cstdlib>

using namespace std; 

int main(){
	int *xp; 
	double *dp;
	int *arr_dynamic;
	int **matriz;

	struct Punto3d{
		float x,y,z;
	} *punto;

	int n, m;
	cout <<"Ingrese un numero entero y uno doble" << endl;
	xp = new int;
	dp = new double; 

	cin >> *xp >> *dp;
	cout << *xp << " " << *dp << endl;

	cout << "Ingrese n y m" << endl;
	cin >> n >> m;

	arr_dynamic = new int[n];
	matriz = new int* [n]; 
	for(int i=0; i < n; i++)
		matriz[i] = new int[m]; 
	srand(m);

	for(int i=0; i<n; i++) 
		arr_dynamic[i] = rand()%10;

	for(int i=0; i<n; i++) 	
		for(int j=0; j<m; j++)
			matriz[i][j]= rand()%10; 
	cout << endl;
	for (int i=0; i<n; i++)
		cout << arr_dynamic[i] <<" ";

	cout << endl; 
	cout << endl;
	
	for (int i=0; i<n; i++){ 
		for(int j=0; j<m; j++)
			cout << matriz[i][j] <<" "; 
			cout << endl;
	}

	punto = new Punto3d;
	punto-> x = 3; 
	punto-> y = 3; 
	punto-> z = 10;

	cout << punto->x << " " << punto->y << " " << punto->z << endl;
	delete xp;
	delete dp;
	delete[] arr_dynamic;
	
	for(int i=0; i<n; i++)
		delete[] matriz[i];
		delete punto;
		return 0;
	}
