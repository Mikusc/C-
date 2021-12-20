#include<iostream>
using namespace std;
int Factorial(int n);
int main()
{ int  k ;
    cout<<"Compute Factorial(k) ,  Please input k: ";
    cin>>k;
    cout<<k<<"! = "<<Factorial(k)<<endl;
}
int Factorial(int n){
    if (n == 0)
        return 1;
    else
        return n * Factorial (n - 1);
}
