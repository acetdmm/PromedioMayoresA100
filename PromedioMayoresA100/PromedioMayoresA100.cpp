#include <iostream>
using namespace std;
int main() {
int array[15];
// Ingresar los valores del array
for(int i = 0; i < 15; i++) {
cout << "Ingrese el valor para la posición " << i + 1 << ": ";
cin >> array[i];
}
// Mostrar valores mayores a 100
cout << "Valores mayores a 100: ";
for(int i = 0; i < 15; i++) {
if(array[i] > 100) {
cout << array[i] << " ";
}
}
cout << endl;
return 0;
}