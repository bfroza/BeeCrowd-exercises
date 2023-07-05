#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

 double dist(double X1, double X2 ,double Y1 ,double Y2){

     return (sqrt(pow(X2-X1,2) + pow(Y2-Y1,2)));
 }



int main() {

  double x1,x2,y1,y2;
  cin >> x1 >> y1 >> x2 >> y2 ;
  cout << fixed << setprecision(4) << dist(x1,x2,y1,y2) << endl;

    return 0;
}
