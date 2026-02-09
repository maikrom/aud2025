#include <iostream>
using namespace std;

int quadrat ( int x ) {
    return x * x ;
}

int main () {
cout << " Quadrat von 5: " << quadrat (5) << endl ;
cout << " Quadrat von -3: " << quadrat ( -3) << endl ;
cout << " Quadrat von 10: " << quadrat (10) << endl ;

return 0;
}