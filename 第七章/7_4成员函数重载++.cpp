#include <iostream>
using namespace std;
class Increase{
public:
    Increase(){
        value = 0;
    }
    void display() const{
        cout<<value<<endl;
    }
    Increase operator++();
    Increase operator++(int);
private:
    unsigned value;
};
Increase Increase::operator++() {
    value++;
    return *this;
}
Increase Increase::operator++(int) {
    Increase temp;
    temp.value = value++;
    return temp;
}
int main(){
  Increase a,b,n;
  int i;
  for(i = 0; i < 10; i++)
      a = n++;
  cout<<"n=";
  n.display();
  cout<<"a=";
  a.display();
  for(i = 0; i < 10; i++)
      b = ++n;
    cout<<"n=";
    n.display();
    cout<<"b=";
    b.display();
}
