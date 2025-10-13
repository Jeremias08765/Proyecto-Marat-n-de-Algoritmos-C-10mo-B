#include <iostream>
using namespace std;
int main() {
    int c2=0,c3=0;
    for(int i=1;i<=50;i++){
        if(i%2==0) c2++;
        if(i%3==0) c3++;
    }
    cout << "Multiplos de 2: " << c2 << ", Multiplos de 3: " << c3;
    return 0;
}
