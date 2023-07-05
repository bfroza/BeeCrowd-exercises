#include <iostream>

using namespace std;

int main()
{
int tempo, c, anos , meses , dias;
cin >> tempo;

anos= tempo/365;
tempo = tempo%365;
meses=tempo/30;
tempo=tempo%30;
dias= tempo;

cout << anos << " ano(s)" << endl;
cout << meses << " mes(es)" << endl;
cout << dias << " dia(s)" << endl;



    return 0;
}
