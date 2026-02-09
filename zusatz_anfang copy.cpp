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
    int n;
    cout << "Wie viele Schüler? (n):" << endl;
    cin >> n; 

    // Da wir beim Schreiben des Programms nicht wissen wie viele Schüler es sind
    // können wir nicht einfach string student1 = ...; usw. machen
    // Also erstellen wir uns Listen mit der Länge n wo wir Namen und Noten abspeichern
    string namen[n];
    double noten[n];
    
    // Nun wollen wir für jeden Schüler einmal Name und Note eintragen
    // Dabei bekommt jeder Schüler einen index i mit dem wir namen und noten abrufen können
    // Beispiel: namen = {Tom, Jerry}; noten = {4.0, 1.0};
    // namen[0] == Tom; noten[0] == 4.0;
    
    // Erstmal alle Namen eingeben (n)
    for(int i = 0;i < n;i++){
        cin >> namen[i];
    }
    // Und dann die Noten:
    for(int i = 0;i < n;i++){
        cin >> noten[i];
    }

    // Um den Durchschnitt zu berechnen brauchen wir einmal die Summe aller Noten
    // und teilen dann durch die Anzahl (n)
    double summe = 0;
    
    // for(int i = 0;i < n;i++){
    
    // }

    // double durchschnitt = summe/n;

    // cout << "Besser als der Durchschnitt " << durchschnitt << " waren:" << endl;

    // Namen der Schüler mit note[i] <= durchschnitt ausgeben

    // Beste Note ermitteln

    // Schüler mit note[i] == beste_Note ausgeben
    
    return 0; // Rückgabewert; signalisiert, dass das Programm erfolgreich beendet wurde.
}