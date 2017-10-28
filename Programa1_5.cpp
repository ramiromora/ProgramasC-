#include<iostream>
using namespace std;
int main(){
	int a, b; char oper;
	cout << "Introduzca los valores y la operacion a realizar, usando espacios" << endl;
	cout << "Por ejemplo: 5 + 7" << endl; 
	cin >> a >> oper >> b;
	switch(oper){
	case '+': 
		cout << a << oper << b << " = " << a + b << endl; 
		break;
	case '-':
		cout << a << oper << b << " = " << a - b << endl; 
		break;
	case '*':
		cout << a << oper << b << " = " << a * b << endl;
		break;
	case '/': 
		cout << a << oper << b << " = " << a / b << endl;
		break;
	case '%':
		cout << a << oper << b << " = " << a % b << endl;
		break;
	default:
		break;
	}
	return 0;
}
