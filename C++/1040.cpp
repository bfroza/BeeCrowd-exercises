#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double N1, N2, N3, N4, media, exame, notafinal;

    cin >> N1 >> N2 >> N3 >> N4;
media= ((N1*2)/10) + ((N2*3)/10) + ((N3*4)/10)+ ((N4*1)/10);
    cout << fixed << setprecision(1) << "Media: " << media<< endl;
    if (media>= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (media<5)
    {
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        cout << "Aluno em exame." << endl;

        cin >> exame;
        cout << fixed << setprecision(1) << "Nota do exame: " << exame << endl;
        notafinal= (exame+media)/2;

        if (notafinal>=5 ) {
            cout << "Aluno aprovado." << endl;
        }
else{ cout << "Aluno reprovado." << endl;
    }


 
     cout <<fixed << setprecision(1) << "Media final: " << notafinal << endl;
    }

         return 0;
}