// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    int n;
    int summe = 0;
    
    cout << "Gib mir eine Zahl:" << endl;
    cin >> n;

    for(int i=1;i<=n;i++){
        summe += i;
    }

    cout << "Die Summe ist:" << summe << endl;

    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}