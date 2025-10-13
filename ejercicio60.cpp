#include <iostream>
using namespace std;
int main() {
    int n;
    float num, suma=0;
    cout << "Cuantos numeros: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        cout << "Numero " << i << ": ";
        cin >> num;
        suma += num;
    }
    cout << "Promedio: " << suma/n;
    return 0;
}
