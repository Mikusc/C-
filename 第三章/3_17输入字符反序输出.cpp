#include <iostream>
using namespace std;
void reverse();
int main(){
    cout<<"请输入一串字符："<<endl;
    reverse();
    cout<<endl;
}
void reverse(){
    char ch;
    cin>>ch;
    if(ch != '.')
        reverse();
    cout<<ch;
}
