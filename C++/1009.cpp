#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
   string nome;
  double salariof , bonus;
  double TOTAL;
  
  cin >> nome >> salariof >> bonus;
  
  TOTAL = (salariof + (bonus*0.15));
  cout << fixed << setprecision(2) << "TOTAL = R$ " << TOTAL << endl;
 
    return 0;
}