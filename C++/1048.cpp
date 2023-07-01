#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
   double sala;
   cin >> sala ;
   
   if(sala<=400){
       cout << fixed << setprecision(2) << "Novo salario: " << sala+sala*0.15<< endl << "Reajuste ganho: " << sala*0.15 <<endl << "Em percentual: 15 %"<< endl;
   }
    else if(sala>400 && sala <= 800){
       cout << fixed << setprecision(2)<< "Novo salario: " << sala+sala*0.12<< endl << "Reajuste ganho: " << sala*0.12 <<endl << "Em percentual: 12 %"<< endl;
   }
    else if(sala>800 && sala <= 1200){
       cout << fixed << setprecision(2)<< "Novo salario: " << sala+sala*0.10<< endl << "Reajuste ganho: " << sala*0.10 <<endl << "Em percentual: 10 %"<< endl;
   }
    else if(sala>1200 && sala <= 2000){
       cout << fixed << setprecision(2)<< "Novo salario: " << sala+sala*0.07<< endl << "Reajuste ganho: " << sala*0.07 <<endl << "Em percentual: 7 %"<< endl;
   }
   else 
   {
     cout << fixed << setprecision(2)<< "Novo salario: " << sala+sala*0.04<< endl << "Reajuste ganho: " << sala*0.04 <<endl << "Em percentual: 4 %"<< endl;  
   }
   
 
    return 0;
}