#include <iostream>
using namespace std;
long fact(int m);
long bin(int n, int k);
int main(){
    int a,b;
    long f;
    cout << "Please input data a and b:" << endl ;
    cin >> a >> b ;
    f = bin(a,b);
    cout << " second:  bin(" << a << ',' << b << ")= " << f << endl ;
    return 0;
}
long fact(int m){
    long sum = 1;
    for(int i = 1; i <= m; i++)
        sum *= i;
    return sum;
}
long bin(int n, int k){
    long result;
    result = fact(n)/(fact(k)/ fact(n - k));
    return result;
}
