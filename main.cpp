#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n, i, t, j;

    cout << "quanti sono gli studenti ?" << endl;
    cin >> n;
    string nomi[n];
    int voti[n];

    i = 0;
    while (i < n) {
        cout << "quale è il" << i + 1 << "nome?" << endl;
        cin >> nomi[i];
        cout << "quale è il" << i + 1 << "voto?" << endl;
        cin >> voti[i];
        i = i + 1;
    }
    string c;

    i = 0;
    j = 0;
    t = 0;
    while (i < n) {
        j = 0;
        while (j <= n - 2 - i) {
            if (voti[j] > voti[j + 1]) {
                t = voti[j];
                voti[j] = voti[j + 1];
                voti[j + 1] = t;
                c = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = c;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "il" << i + 1 << "nome è" << nomi[i] << "il corrispondente voto è" << voti[i] << endl;
        i = i + 1;
    }
    
}

