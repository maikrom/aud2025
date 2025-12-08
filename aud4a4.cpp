// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    int wochentag;
    cout << "Welcher Wochentag?" << endl;
    cin >> wochentag;

    switch (wochentag){
        case 1: 
        cout << "Montag" << endl;
        break;
        case 2: 
        cout << "Dienstag" << endl;
        break;
        case 3: 
        cout << "Mittwoch" << endl;
        break;
        case 4: 
        cout << "Donnerstag" << endl;
        break;
        case 5:
        cout << "Freitag" << endl;
        break;
        case 6:
        cout << "Samstag" << endl;
        break;
        case 7:
        cout << "Sonntag" << endl;
        break;
        default:
        cout << "Ungültige Eingabe" << endl;
        break;
    }
    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}