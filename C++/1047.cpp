#include <iostream>

using namespace std;

int main()
{
int horainicial, minutoinicial, horafinal,minutofinal,difh,difm;
cin >>horainicial >> minutoinicial >> horafinal >> minutofinal;
if(horainicial== horafinal && minutofinal< minutoinicial ){
    difh=(horafinal-horainicial+24)+((minutofinal-minutoinicial +60)/60-1);
    difm=(minutofinal - minutoinicial +60)%60;
}
else if (horainicial== horafinal && minutoinicial == minutofinal){
    difh=(horafinal-horainicial+24)+((minutofinal-minutoinicial +60)/60-1);
    difm=(minutofinal - minutoinicial +60)%60;
    
}
else {
difh=(horafinal-horainicial+24)%24+((minutofinal-minutoinicial +60)/60-1);
difm=(minutofinal - minutoinicial +60)%60;}
cout <<"O JOGO DUROU " <<  difh << " HORA(S) E " << difm << " MINUTO(S)" << endl;

    return 0;
}