#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i;
    long m;
    cout<<"请输入一个数："<<endl;
    cin>>m;
    double sqrt_m = sqrt(m);
    for(i = 2; i <=sqrt_m; i++)
        if(m % i == 0)
            break;
    if(i > sqrt_m)
        cout<<m<<"是素数"<<endl;
    else
        cout<<m<<"不是素数"<<endl;
}
