#include <iomanip>
#include <iostream>

using namespace std;

int main() {

 int c, q;

 cin >> c >> q;

if(c == 1){

cout <<fixed << setprecision(2) << "Total: R$ " << q* 4.00 << endl;
}
if (c == 2){

cout <<fixed << setprecision(2) <<"Total: R$ " << q* 4.50 << endl;
}
if (c == 3){

cout <<fixed << setprecision(2) <<"Total: R$ " << q* 5.00 << endl;
}

if (c == 4){

cout <<fixed << setprecision(2)<<"Total: R$ " << q* 2.00 << endl;
}

if (c == 5){

cout <<fixed << setprecision(2) << "Total: R$ " <<q* 1.50 << endl;
}





 return 0;
}

