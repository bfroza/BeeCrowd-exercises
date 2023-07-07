#include <iostream>
 #include <iomanip>
using namespace std;
 
int main() {
 
   double A, B , C;
   cin >> A >> B>> C;
   
   if (A>=B +C || B>= A+C || C>=B+A){
 
  cout << fixed << setprecision(01) << "Area = " << ((A+B)*C)/2 << endl; 
   }
   
   
   else  { 
        cout <<fixed << setprecision(01) << "Perimetro = " << A+B+C << endl;
   }

 
    return 0;
}