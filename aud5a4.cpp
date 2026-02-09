#include <iostream>
#include <string>
using namespace std;

// Teil b : Zeichen zaehlen
int zaehleZeichen ( string text , char zeichen ) {
    int anzahl = 0;
    for ( int i = 0; i < text . length () ; i ++) {
        if ( text [ i ] == zeichen ) {
            anzahl ++;
        }
    }
}
// Teil c : Palindrom pruefen
bool istPalindrom ( string text ) {
    int laenge = text . length () ;
    for ( int i = 0; i < laenge / 2; i ++) {
        if ( text [ i ] != text [ laenge - 1 - i ]) {
            return false ;
        }
    }
    return true ;
}
int main () {
    // Teil a : Strings konkatenieren
    string str1 , str2 ;
    cout << " Geben Sie den ersten String ein : ";
    getline ( cin , str1 );
    cout << " Geben Sie den zweiten String ein : ";
    getline ( cin , str2 );
    string zusammen = str1 + " " + str2;
    cout << " Zusammengefuegt : " << zusammen << endl ;
    // Teil b testen
    string testText = " Hallo Welt " ;

    char suchzeichen = 'l';
    int anzahl = zaehleZeichen(testText , suchzeichen) ;
    cout << "Das Zeichen" << suchzeichen << " kommt " 
    << anzahl << " mal in ’" << testText << " vor ." << endl;
    // Teil c testen
    string wort1 = "anna";
    string wort2 = "hello";
    if (istPalindrom(wort1)) {
        cout << "Ist" << wort1 << " ein Palindrom? Ja " << endl ;
    } else {
        cout << "Ist ’" << wort1 << " ein Palindrom? Nein " << endl ;
    }
    if (istPalindrom(wort2)){
        cout << " Ist ’" << wort2 << " ’ ein Palindrom ? Ja " << endl ;
    } else {
        cout << " Ist ’" << wort2 << " ’ ein Palindrom ? Nein " << endl ;
    }
    return 0;
}