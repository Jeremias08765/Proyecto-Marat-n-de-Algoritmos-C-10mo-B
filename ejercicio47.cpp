#include <iostream>
using namespace std;
int main() {
    int horas;
    float pago;
    cout << "Horas trabajadas: ";
    cin >> horas;
    if (horas <= 40) pago = horas * 10;
    else pago = 40 * 10 + (horas - 40) * 15;
    cout << "Pago total: " << pago;
    return 0;
}
