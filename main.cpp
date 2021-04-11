// Selvin Jordan Pérez Xicara 1605319
#include <iostream>
using namespace std;
int main() {
	int n1, n2;
	cout << "ingrese el primer numero: ";
	cin >> n1;
	
	cout << "ingrese el segundo numero: ";
	cin >> n2;
	// estructura selectiva 
	if (n1 > n2) {
		cout << "el primer numero es mayor: " << endl;
	}
	else {
		cout << "el segundo numero es el mayor" << endl;
	}
	cout << "gracias por utilizar el programa: ";
    return 0;
}
