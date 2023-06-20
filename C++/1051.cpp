#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 
int main() {
 
    double a,b;
    cin >> a;
     if (a<= 2000)
    {
      cout << "Isento" << endl;
    }
   
   else
   {
   
   
   if (a> 4500)
    {
       b=(a-4500)*0.28;
       a=4500;
    }
    if (a> 3000)
    {
       b=b+(a-3000)*0.18;
       a=3000;
    }
    if (a> 2000)
    {
       b=b+(a-2000)*0.08;
       a=2000;
    }
     

    cout << fixed << setprecision(2) <<   "R$ " << b << endl;
   }
    return 0;
    
}