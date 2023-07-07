#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double consumo(double km, double litros){

    return km/litros;
}

int main() {

   double k,l;
   cin >> k >> l;

   cout << fixed << setprecision(3) << consumo(k,l) << " km/l" << endl;

    return 0;
}
