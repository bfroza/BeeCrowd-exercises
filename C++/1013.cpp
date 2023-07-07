#include <iostream>
 
using namespace std;
 
int main() {
 
int a , b, c, maiorab;
cin >> a >> b >> c >> maiorab;

maiorab = (a+b+abs(a-b))/2;

cout <<  (maiorab+c+abs(maiorab-c))/2    << " eh o maior" << endl;
    return 0;
}