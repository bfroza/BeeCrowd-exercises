#include <iostream>
 
using namespace std;
 
int main() {
 
    int a;
    cin >> a;
    if(a% 2 ==0) a++;
    for(int i=0; i<6;i++ ){
        cout << a << endl;
        a=a+2;
    }
 
    return 0;
}