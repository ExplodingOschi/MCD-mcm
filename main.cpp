#include <iostream>
using namespace std;

int MCD(int n1, int n2) {

    while (n2 > 0) {
        int m = n1 % n2;
        n1 = n2;
        n2 = m;

    }

    return n1;
}

int mcm(int n1, int n2) {

    int m = (n1 * n2) / MCD(n1, n2);

    return m;
}

int main() {

    int n1, n2;

    do{

        cout << "Inserire il primo numero intero positivo: ";
        cin >> n1;
        cout << "Inserire il secondo numero intero positivo: ";
        cin >> n2;

        if(n1 < 0 || n2 < 0) {

            if(n1 <0) cout << "Il primo numero non e' corretto!" << endl;

            if(n2 < 0) cout << "Il secondo numero non e' corretto!" << endl;
        }
    } while(n1 < 0 || n2 < 0);

    cout << "MCD di " << n1 << " e " << n2 << " : " << MCD(n1, n2) << "." << endl;
    cout << "mcm di " << n1 << " e " << n2 << " : " << mcm(n1, n2) << "." << endl;

    return 0;
}
