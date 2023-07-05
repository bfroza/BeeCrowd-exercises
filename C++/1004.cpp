#include <iostream>
 
using namespace std;
 
 
int produto(int a, int b){
    
    
    return a*b;
}
int main() {
 
   int num1,num2;
   cin >> num1 >> num2;
   
   cout << "PROD = " << produto(num1,num2) << endl;
 
    return 0;
}