// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>
#include <string>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    string name_student = "Max";
    int alter_student = 24;
    double groesse_student = 1.75;
    bool ist_student = false; //1.1

    string ist_student_str = "";
    if(ist_student){
        ist_student_str = "Student";
    }
    else{
        ist_student_str = "kein Student";
    }

    cout << name_student << " ist " << alter_student << " Jahre alt, " << groesse_student << "m gross und " << ist_student_str << endl; // 1.2


    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}