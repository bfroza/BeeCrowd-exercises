#include <iostream>
 
using namespace std;
 
int main() {
 
   double a, cont=0;
   
   for(int i=0;i<6;i++){
       cin >> a;
       if(a>0) cont ++;
   }
   
 cout << cont<< " valores positivos" << endl;
    return 0;
}