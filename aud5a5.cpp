#include <iostream>
using namespace std ;

void tausche ( int & a , int & b ) {
    int temp = a ;
    a = b ;
    b = temp ;
}

int main () {
    int x = 10 , y = 20;
    cout << " Vor dem Tausch : x = " << x << ", y = " << y << endl ;
    tausche (x ,y);
    cout << " Nach dem Tausch : x = " << x << ", y = " << y << endl ;
    return 0;
}