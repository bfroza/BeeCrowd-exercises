#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int c1 , n1 , c2 , n2 ;
    double v1 , v2;
 
    
    
 double vpag;
 
 cin >> c1 >> n1 >>v1 ;
 cin >> c2 >> n2 >> v2;
 
 vpag = (n1*v1) + (n2 * v2);
 cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << vpag << endl;
 
    return 0;
}