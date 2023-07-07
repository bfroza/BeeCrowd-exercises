#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
double valorinicial;
int valor ,nota100, nota50, nota20 ,nota10, nota5 , nota2 ,moeda1,moeda50, moeda25, moeda10, moeda5, moeda01;
cin >> valorinicial;

cout << "NOTAS:"<< endl;
valor = valorinicial*100;
nota100 = valorinicial/100;
valor= valor%10000;
nota50 = valor/5000;
valor= valor%5000;
nota20= valor/2000;
valor= valor%2000;
nota10= valor/1000;
valor= valor%1000;
nota5= valor/500;
valor = valor%500;
nota2 = valor/200;
valor = valor%200;
moeda1= valor/100;
valor= valor %100;
moeda50= valor/50;
valor= valor %50;
moeda25= valor/25;
valor= valor%25;
moeda10= valor/10;
valor= valor%10;
moeda5= valor/5;
valor= valor%5;
moeda01= valor/1;
valor= valor%1;

cout << nota100  << " nota(s) de R$ 100.00" <<  endl;
cout << nota50 << " nota(s) de R$ 50.00" <<  endl;
cout << nota20 << " nota(s) de R$ 20.00" <<  endl;
cout << nota10 << " nota(s) de R$ 10.00" <<  endl;
cout << nota5 << " nota(s) de R$ 5.00" <<  endl;
cout << nota2 << " nota(s) de R$ 2.00" <<  endl;
cout << "MOEDAS:" << endl;

cout << moeda1 << " moeda(s) de R$ 1.00" <<  endl;
cout << moeda50 << " moeda(s) de R$ 0.50" <<  endl;
cout << moeda25 << " moeda(s) de R$ 0.25" <<  endl;
cout << moeda10 << " moeda(s) de R$ 0.10" <<  endl;
cout << moeda5 << " moeda(s) de R$ 0.05" <<  endl;
cout << moeda01 << " moeda(s) de R$ 0.01" <<  endl;



    return 0;
}


