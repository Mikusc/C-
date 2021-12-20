#include <iostream>
using namespace std;
class Location{
public:
    Location(int x,int y){
        X = x;
        Y = y;
    }
    Location(const Location &p){
        X = p.X;
        Y = p.Y;
        cout<<"复制构造函数已响应"<<endl;
    }
    int getX(){
        return X;
    }
    int getY(){
        return Y;
    }
private:
    int X,Y;
};
int main(){
    Location A(1,2);
    Location B(A);
    cout<<B.getX()<<","<<B.getY()<<endl;
}
