#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double raio(double a){

    return 3.14159*pow(a,2);
}

int main() {

   double A;
   cin >> A;
   cout << fixed << setprecision(4) <<  "A="<< raio(A) << endl;

    return 0;
}
