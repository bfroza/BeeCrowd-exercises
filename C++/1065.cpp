#include <iostream>
 
using namespace std;
 
int main() {
 
   int a,cont;
   for(int i=0;i<5;i++){
       cin >> a;
     if(a % 2 ==0){
         cont = cont +1;
     } 
       
   }
   cout << cont << " valores pares" << endl;
    return 0;
}