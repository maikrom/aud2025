#include <iostream>
using namespace std ;

class Rechteck {
    private :
        double breite ;
        double hoehe ;
    public :
    // Standard - Konstruktor
    Rechteck () {
        breite = 1.0;
        hoehe = 1.0;
    }
    // Parametrisierter Konstruktor
    Rechteck ( double b , double h ) {
        breite = b ;
        hoehe = h ;
    }
    // Flaeche berechnen
    double berechneFlaeche() {
        return breite * hoehe ;
    }
    // Umfang berechnen
    double berechneUmfang() {
        return 2 * ( breite + hoehe ) ;
    }
    // Setter - Methoden
    void setBreite ( double b ) {
        breite = b ;
    }
    void setHoehe ( double h ) {
        hoehe = h ;
    }
    // Getter - Methoden
    double getBreite () {
        return breite ;
    }
    double getHoehe () {
        return hoehe;
    }
};

int main () {
    // Test mit Standard - Konstruktor
    Rechteck r1 ;
    cout << " Rechteck 1 ( Standard ) : " << endl;
    cout << " Breite : " << r1.getBreite () << ", Hoehe : "<< r1.getHoehe () << endl;
    cout << " Flaeche : " << r1.berechneFlaeche() << endl;
    cout << " Umfang : " << r1.berechneUmfang() << endl << endl;

    // Test mit parametrisiertem Konstruktor
    Rechteck r2 (5.0 , 3.0) ;
    cout << " Rechteck 2 (5.0 x 3.0) : " << endl ;
    cout << " Breite : " << r2.getBreite () << ", Hoehe : " << r2.getHoehe () << endl ;
    cout << " Flaeche : " << r2.berechneFlaeche() << endl ;
    cout << " Umfang : " << r2.berechneUmfang() << endl << endl ;

    // Test mit Setter - Methoden
    Rechteck r3;
    r3.setBreite(4.5);
    r3.setHoehe (2.5) ;
    cout << " Rechteck 3 (modifiziert auf 4.5 x 2.5) : " << endl;
    cout << " Flaeche : " << r3.berechneFlaeche() << endl;
    cout << " Umfang : " << r3.berechneUmfang() << endl;
    return 0;
}