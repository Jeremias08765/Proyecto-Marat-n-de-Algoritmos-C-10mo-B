#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) cout << "Mayor: " << a;
    else if (b >= a && b >= c) cout << "Mayor: " << b;
    else cout << "Mayor: " << c;
    return 0;
}
