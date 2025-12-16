// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    int zahl;
    cout << "Gib eine Zahl ein:" << endl;
    // erste Eingabe der Zahl, stattdessen könnte man die Zahl anfangs auch auf z.B 0 setzen
    cin >> zahl;
    while (zahl <= 0){
        cout << "Gib eine Zahl ein:" << endl;
        cin >> zahl;
    }
    cout << zahl << endl;
    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}