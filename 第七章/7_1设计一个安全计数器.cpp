#include <iostream>
#include <cstdlib>
using namespace std;
class Calculator{
public:
    Calculator(){
        value = 0;
    }
    void operator ++();
    void operator --();
    unsigned int operator ()();
private:
    unsigned int value;
};
void Calculator::operator++() {
    if(value < 65535)
        value++;
    else{
        cout<<"\nData overflow!"<<endl;
        exit(0);
    }
}
void Calculator::operator--() {
    if(value > 0)
        value--;
    else{
        cout<<"\nData overflow!"<<endl;
        exit(0);
    }
}
unsigned int Calculator::operator()() {
    return value;
}
int main(){
    Calculator Counter;
    int i;
    for(i = 0; i < 5; i++){
        ++Counter;
        cout<<"\nCounter="<<Counter();
    }
    for(i = 0; i <= 5; i++){
        --Counter;
        cout<<"\nCounter="<<Counter();
    }
}
