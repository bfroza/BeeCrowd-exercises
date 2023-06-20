#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
 
   double a,media=0, cont=0;
   
   for(int i=0;i<6;i++){
       cin >> a;
       if(a>0) cont ++;
       if(a>0){
           
        media= media+a;
   }
   }
 cout << cont << " valores positivos" << endl;
 cout <<fixed<< setprecision(1)<< media/cont << endl;
   
    return 0;
}