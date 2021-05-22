#include <iostream>

using namespace std;

int main()
{
    int cont = 0;
    double numero;
    while (cont < 100){
        cin >> numero;
        if (numero <= 10){
            cout.precision(1);
            cout << fixed << "A[" << cont << "] = " << numero <<endl;
        }
        cont++;
    }
    return 0;
}
