#include <iostream>
using namespace std ;

// Version 1: zwei int - Werte
int maximum ( int a , int b ) {
    if ( a > b ) {
        return a ;
    } else {
        return b ;
    }
}

// Version 2: zwei double - Werte
double maximum ( double a , double b ) {
    if ( a > b ) {
        return a ;
    } else {
        return b ;
    }
}
// Version 3: drei int - Werte
int maximum ( int a , int b , int c ) {
    int max_ab;
        if ( a > b ) {
            max_ab = a ;
        } else {
            max_ab = b ;
        }
        if ( max_ab > c ) {
            return max_ab ;
        } else {
            return c ;
        }
}
int main () {
    cout << " Maximum von 5 und 8: " << maximum (5 , 8) << endl ;
    cout << " Maximum von 3.7 und 2.1: " << maximum (3.7 , 2.1) << endl ;
    cout << " Maximum von 10 , 25 und 15: " << maximum (10 , 25 , 15) << endl ;
    return 0;
}