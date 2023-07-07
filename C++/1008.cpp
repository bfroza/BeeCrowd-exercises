#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
   double vhoras;
   int number, htrabalhadas;
   cin >> number >> htrabalhadas >> vhoras;
   
   

   cout << "NUMBER = " << number << endl;
   cout << fixed <<setprecision(2) << "SALARY = U$ " << htrabalhadas * vhoras << endl;
  
   
   
   
 
    return 0;
}