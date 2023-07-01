#include <iostream>

using namespace std;

struct RACIONAL {
    int num;
    int den;
    /* data */
};

RACIONAL simplifica(RACIONAL result) {
    int div=2,menor=0;
    if(result.num > result.den) {
        menor = result.den;
    } else {
        menor = result.num;
    }
    if(menor <0) menor *=-1;
    while(div <= menor) {

        if(result.num %div == 0 and result.den % div == 0) {
            result.num = result.num/div;
            result.den = result.den/div;


        }

        else {
            div++;
        }
    }
    return result;
}

int main() {
    int vezes;
    cin >> vezes;
    for ( int i =0; i<vezes; i++) {
        RACIONAL A, B, result;
        char lixo;
        char operacao;
        cin >> A.num;
        cin >> lixo;
        cin >> A.den;
        cin >> operacao;
        cin >> B.num >> lixo >> B.den;
        if(operacao == '+') {
            result.num = A.num* B.den + A.den*B.num;
            result.den =  A.den * B.den;
        }
        if(operacao == '-') {
            result.num = A.num* B.den - A.den*B.num;
            result.den =  A.den * B.den;

        }

        if(operacao == '/') {
            result.num = A.num* B.den ;
            result.den =  A.den * B.num;

        }
        if( operacao == '*') {
            result.num = A.num* B.num;
            result.den =  A.den * B.den;

        }





        RACIONAL simp = simplifica(result);

        cout << result.num << "/" << result.den << " = " << simp.num<< "/" <<simp.den << endl;

    }
    return 0;
}
