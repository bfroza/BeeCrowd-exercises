#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
    double R , volume;
    double pi=3.14159;
    cin >> R ;
    
    volume = (4/3.0) *pi* pow(R,3);
    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
    
    return 0;
}