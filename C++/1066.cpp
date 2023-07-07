#include <iostream>
 
using namespace std;
 
int main() {
 
   int a,cont;
   for(int i=0;i<5;i++){
       cin >> a;
     if(a % 2 ==0){
         cont = cont +1;
     } 
       a#include <iostream>

using namespace std;

int main() {

   int a,im=0,par=0,p=0,n=0;
   for(int i=0; i<5;i++){

       cin >> a;

       if(a %2 == 0){
           par=par+1;
       }
       if(a %2 != 0){
           im = im+1;
       }
       if(a>0){
           p=p+1;
       }
       if(a<0){
           n =n+1;
       }
   }
 cout << par << " valor(es) par(es)" << endl;
 cout << im << " valor(es) impar(es)" << endl;
 cout << p << " valor(es) positivo(s)" << endl;
 cout << n << " valor(es) negativo(s)" << endl;
    return 0;
}

   }
   cout << cont << " valores pares" << endl;
    return 0;
}