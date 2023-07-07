#include <iostream>
#include <iomanip>
using namespace std;
double dif(double a, double b ,double c ){

    return((a*0.2) +(b*0.3)+ (c*0.5)) ;
}


int main() {
    double A,B,C;
    cin >> A >> B >> C ;



    cout << fixed << setprecision(1) <<  "MEDIA = " << dif(A,B,C) << endl;



    return 0;
}
