#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
 
   int a , b, f;
   cin >> a >> b;
   f= a-b;
  if(a>=b){
      cout << "O JOGO DUROU " << (24 - a) + b << " HORA(S)" << endl;
  }
  else{
      cout << "O JOGO DUROU " <<   -a+b *pow(1,-1) << " HORA(S)" << endl;
  }
  

    return 0;

}