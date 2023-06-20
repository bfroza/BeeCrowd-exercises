#include <iostream>

using namespace std;

int main() {

    int di , df , dc , hi , hf , hc , mi , mf , mc , si , sf , sc, cont;
    string texto;

cin >>  texto;
    cin >> di >> hi >> texto >> mi >> texto >> si;
    cin >> texto;
    cin >> df >> hf >> texto >> mf >> texto >> sf;


    cont = (sf-si) + (mf-mi)*60 + (hf-hi)*60*60 + (df-di)*60*60*24;
    dc = cont / (60*60*24);
    cont = cont - (dc*60*60*24);
    hc = cont / (60*60);
    cont = cont - (hc*60*60);
    mc = cont / 60;
    sc = cont - (mc*60);

    cout << dc << " dia(s)" << endl << hc << " hora(s)" << endl << mc << " minuto(s)" << endl << sc << " segundo(s)" << endl;

    return 0;
}