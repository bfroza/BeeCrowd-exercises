#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double A,B;
    double MEDIA;

    cin >> A;
    cin >> B;

    MEDIA =  (A*3.5/11) + (B*7.5/11);


    cout << "MEDIA = " << fixed<< setprecision(5) << MEDIA << endl;

    return 0;

}

