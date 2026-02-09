// "#include <iostream>" ermöglicht die Ein- und Ausgabe.
#include <iostream>

// "using namespace std" erspart das ständige Schreiben von std::
using namespace std;

// Einstiegspunkt des Programms
int main() {
    // Programmcode kommt hier hinein
    /*
    Hier einmal eine Vorlage mit der man die Zusatzaufgabe auf dem ersten C++ Blatt
    anfangen könnte. Später kommt dann auch die komplette Lösung, aber versucht gerne den Rest
    selber zu lösen
    */

    // Erstmal sollen wir ja wie sonst auch einen input vom Nutzer bekommen
    int n = 3;
    cout << "Wie viele Studenten? (n):" << endl;
    //cin >> n;

    string namen[3] = {"Max", "Tom", "Jerry"};
    double noten[3] = {1.0, 4.0, 2.3};
    
    // Nun wollen wir ja für jeden Studenten einmal Name und Note haben
    // for(int i = 0;i < n;i++){
    //     cin >> namen[i];
    //     cin >> noten[i];
    // }

    // Durchschnitt berechnen
    double summe = 0;
    for(int i = 0;i < n;i++){
        summe += noten[i];
    }
    double durchschnitt = summe/n;

    cout << "Besser als der Durchschnitt " << durchschnitt << " waren:" << endl;
    for(int i = 0;i < n;i++){
        if(noten[i] <= durchschnitt){
            cout << namen[i] << endl;
        }
    }
    
    double beste_note = 6.0;
    for(int i = 0;i < n;i++){
        if (noten[i] < beste_note){
            beste_note = noten[i];
        }
    }
    cout << "Die beste Note " << beste_note << " haben erreicht:" << endl;
    for(int i = 0;i < n;i++){
        if(noten[i] == beste_note){
            cout << namen[i] << endl;
        }
    }
    
    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}