#include <iostream>
using namespace std;
void Hanio(int n,char A,char B,char C);
int main() {
    int n;
    char A = 'a',B = 'b',C = 'c';
    cout<<"请输入阶数"<<endl;
    cin>>n;
    Hanio(n,A,B,C);
    return 0;
}
void Hanio(int n,char A,char B,char C){
    if(n == 1)
        cout<<A<<"-->"<<C<<"\t";
    else{
        Hanio(n - 1,A,C,B);
        cout<<A<<"-->"<<C<<"\t";
        Hanio(n - 1,B,A,C);
    }
}
