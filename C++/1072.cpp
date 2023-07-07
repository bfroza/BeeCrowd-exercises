#include <iostream>
 
using namespace std;
 
int main() {
 
   int a,out=0,in=0,b;
   cin >> a;
   for(int i = 0;i < a ; i++){
       cin >> b;
       if(b>= 10 && b < 21){
           in ++;
       }
       else
       out++;
   }
 cout << in << " in" << endl;
  cout << out << " out" << endl;
    return 0;
}