#include<iostream>
using namespace std;
int Fibonacci(int n);
int main(){
    int k;
    cout<<"请输入你要到的位数："<<endl;
    cin>>k;
    for(int i = 1; i <= k; i++){
        cout<<Fibonacci(i)<<"\t";
    }
    cout<<endl;
}
int Fibonacci(int n){
    if (n <= 2)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}
