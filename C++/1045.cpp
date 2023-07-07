#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double A,B,C,a,b,c;
    cin >> A >> B >> C;
    a=A;
    b=B;
    c=C;
    if(B>A) {
        A=b;
        B=a;

    }
    if(C>A) {
        C=A;
        A=c;

    }
    if(A>= (B+C)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if(pow(A,2) == pow(B,2)+ pow(C,2)) {
            cout << "TRIANGULO RETANGULO" <<  endl;

        } else if(pow(A,2) > pow(B,2)+ pow(C,2)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else if(pow(A,2) < pow(B,2)+pow(C,2)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if(A==B && B==C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if(A==B  ||A==C || B==C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }

    }








return 0;
}
