// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    int alter;
    
    cout << "Wie alt bist du?" << endl;
    cin >> alter;

    if (alter < 12){
        cout << "Kind";
    }
    else if (alter <= 17){
        cout << "Jugendlicher";
    }
    else if (alter <= 64){
        cout << "Erwachsener";
    }
    else {
        cout << "Senior";
    }
    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}