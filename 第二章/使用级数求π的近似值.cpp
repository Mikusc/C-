#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double s = 0, x = 1, pi;
    long k = 1;
    int sign = 1;
    do {
        s += x;
        k += 2;
        sign = -sign;
        x = sign / double(k);
    } while (fabs(x) > 1e-8);
    pi = s * 4;
    cout<<"pi="<<pi<<endl;
}
