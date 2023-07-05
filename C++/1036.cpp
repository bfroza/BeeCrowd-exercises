#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double R1, R2;
bool pode = true;

void bhaskara (double A, double B, double C) {
    double delta;
    delta = pow(B,2) - 4*A*C;
    if(delta < 0) {
        pode = false;
    }
    else if (A==0){
        pode = false;
    }
    else {
        R1 = (-B + sqrt(delta))/(2*A);
        R2 = (-B - sqrt(delta))/(2*A);
    }
}

int main() {

    double A, B, C;
    cin >> A >> B >> C;

    bhaskara(A, B, C);

    if (pode) {
        cout << fixed << setprecision(5) << "R1 = " << R1 << endl << "R2 = " << R2 << endl;
    }
    else cout << "Impossivel calcular" << endl;


    return 0;
}
