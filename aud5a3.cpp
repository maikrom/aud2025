#include <iostream>
using namespace std ;

void arrayAusgeben ( int arr [] , int groesse ) {
    cout << " Array - Elemente : ";
    for ( int i = 0; i < groesse ; i ++) {
        cout << arr [ i ];
        if ( i < groesse - 1) {
            cout << ",";
        }
    }    
}
double durchschnitt ( int arr [] , int groesse ) {
    int summe = 0;
    for ( int i = 0; i < groesse ; i ++) {
        summe += arr [ i ];
    }
    return ( double ) summe / groesse ;
}
int main () {
    // Teil a : Array deklarieren und initialisieren
    int zahlen [10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    // AlternativeInitalisierung :
    // int zahlen [10];
    // for ( int i = 0; i < 10; i ++) {
    // zahlen [ i ] = i + 1;
    // }
    // Teil b : Array ausgeben
    arrayAusgeben(zahlen , 10);
    // Teil c : Durchschnitt berechnen
    double avg = durchschnitt( zahlen , 10) ;
    cout << " Durchschnitt : " << avg << endl ;
    return 0;
}