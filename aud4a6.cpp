// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    int korrektes_Passwort = 1234;
    int benutzer_Passwort;

    do{
        cout << "Was ist das Passwort?" << endl;
        cin >> benutzer_Passwort;
    }while(benutzer_Passwort != korrektes_Passwort);

    cout << "Zugang erlaubt!" << endl;
    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}