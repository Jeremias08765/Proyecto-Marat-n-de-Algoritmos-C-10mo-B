#include <iostream>
using namespace std;
int main() {
    int n, num, cont=0;
    cout << "Cantidad de numeros: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        cout << "Numero " << i << ": ";
        cin >> num;
        if(num > 0) cont++;
    }
    cout << "Positivos: " << cont;
    return 0;
}
