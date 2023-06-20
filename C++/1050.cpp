#include <iostream>
 
using namespace std;


string a;


void teste(int DDD){



   if (DDD== 11){
       
       a = "Sao Paulo" ;
   }
   else if  (DDD == 19){
       a = "Campinas" ;
   }
  else if (DDD == 21){
        a = "Rio de Janeiro" ;
   }
  else if (DDD == 27){
        a = "Vitoria" ;
   }
   else if (DDD == 32)
   {
        a =  "Juiz de Fora" ;
   }
    else if  (DDD == 31){
        a = "Belo Horizonte" ;
   }
    else if  (DDD == 61){
        a =  "Brasilia" ;
   }
   else if  (DDD == 71){
        a =  "Salvador" ;
   }
 else  
{
     a= "DDD nao cadastrado" ;
     
 }



}

int main() {
 
   int DD;
   cin >> DD;
   teste(DD);
   cout << a << endl;
   
   
  
 
    return 0;
}