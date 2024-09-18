#include <iostream>
using namespace std;

int main() {
    int baris, kolom;
    
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    int matriks[baris][kolom];

    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            matriks[i][j] = 0; 
        }
    }

    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
