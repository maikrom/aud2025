// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    
    //cout << "Hallo Welt" << endl; // 1.1

    string name;
    cout << "Was ist deine Name?" << endl;
    cin >> name; // 1.2

    cout << "Hallo, " << name << "!" << endl; // 1.3


    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}