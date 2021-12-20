#include <iostream>
#include <cmath>
using namespace std;
class Point{
public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    friend double Distance(Point &a, Point &b);
private:
    double x;
    double y;
};
double Distance(Point &a, Point &b){
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}
int main(){
    Point p1(3.0,5.0),p2(4.0,6.0);
    double d = Distance(p1,p2);
    cout<<"两点间的距离是："<<d<<endl;
}
