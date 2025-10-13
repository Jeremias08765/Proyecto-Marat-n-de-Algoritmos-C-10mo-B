#include <iostream>
using namespace std;
int main() {
    int tipo;
    cout << "Tipo (1=pan, 2=leche, 3=carne): ";
    cin >> tipo;
    switch(tipo) {
        case 1: cout << "Precio: 0.50"; break;
        case 2: cout << "Precio: 1.20"; break;
        case 3: cout << "Precio: 3.80"; break;
        default: cout << "Tipo invalido";
    }
    return 0;
}
