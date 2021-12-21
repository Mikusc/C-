#include <iostream>
#include <cmath>
using namespace std;
class Point{
    friend ostream &operator<<(ostream&, const Point&);
public:
    Point(int = 0, int = 0);
    void setPoint(int, int);
    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }
protected:
    int x,y;
};
Point::Point(int a, int b) {
    setPoint(a,b);
}
void Point::setPoint(int a, int b) {
    x = a;
    y = b;
}
ostream &operator<<(ostream &output, const Point &p){
    output<<"("<<p.x<<","<<p.y<<")";
    return output;
}

class Circle:public Point{
    friend ostream &operator<<(ostream&, const Circle&);
public:
    Circle(double r = 0.0,int x = 0,int y = 0);
    void setRadius(double);
    double getRadius() const;
    double area() const;
protected:
    double radius;
};
Circle::Circle(double r, int x, int y): Point(x,y) {
    setRadius(r);
}
void Circle::setRadius(double r) {
    radius = (r >= 0 ? r : 0);
}
double Circle::getRadius() const {
    return radius;
}
double Circle::area() const {
    return M_PI * radius * radius;
}
ostream &operator<<(ostream &output, const Circle &c){
    output<<"Center="<<"("<<c.x<<","<<c.y<<")"<<endl
    <<"Radius="<<c.radius;
    return output;
}
class Cylinder:public Circle{
    friend ostream &operator<<(ostream&, const Cylinder&);
public:
    Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);
    void setHeight(double);
    double getHeight() const;
    double area() const;
    double volume() const;
protected:
    double height;
};
Cylinder::Cylinder(double h,double r,int x,int y): Circle(r,x,y) {
    setHeight(h);
}
void Cylinder::setHeight(double h) {
    height = (h >= 0 ? h : 0);
}
double Cylinder::getHeight() const {
    return height;
}
double Cylinder::area() const {
    return 2 * Circle::area() + 2 * M_PI * radius * height;
}
double Cylinder::volume() const {
    return Circle::area() * height;
}
ostream &operator<<(ostream &output, const Cylinder &cy){
    output<<"Center="<<"("<<cy.x<<","<<cy.y<<")"<<endl
          <<"Radius="<<cy.radius<<endl
          <<"Height="<<cy.height<<endl;
    return output;
}
int main() {
    Point p(72, 115);        //定义点对象并初始化
    cout << "The initial location of p is " << p << endl;
    p.setPoint(10, 10);        //置点的新数据值
    cout << "\nThe new location of p is " << p << endl;    //输出数据
    Circle c(2.5, 37, 43);    //定义圆对象并初始化
    cout << "\nThe initial location and radius of c are\n" << c << "\nArea = " << c.area() << "\n";
    //置圆的新数据值
    c.setRadius(4.25);
    c.setPoint(2, 2);
    //输出圆心坐标和圆面积
    cout << "\nThe new location and radius of c are\n" << c << "\nArea = " << c.area() << "\n";
    Cylinder cyl(5.7, 2.5, 12, 23);    //定义圆柱体对象并初始化
    //输出圆柱体各数据和表面积，体积
    cout << "\nThe initial location, radius ang height of cyl are\n" << cyl
         << "Area = " << cyl.area() << "\nVolume = " << cyl.volume() << '\n';
    //置圆柱体的新数据值
    cyl.setHeight(10);
    cyl.setRadius(4.25);
    cyl.setPoint(2, 2);
    cout << "\nThe new location, radius ang height of cyl are\n" << cyl
         << "Area = " << cyl.area() << "\nVolume = " << cyl.volume() << "\n";
}


/*
The initial location of p is (72,115)

The new location of p is (10,10)

The initial location and radius of c are
Center=(37,43)
Radius=2.5
Area = 19.635

The new location and radius of c are
Center=(2,2)
Radius=4.25
Area = 56.745

The initial location, radius ang height of cyl are
Center=(12,23)
Radius=2.5
Height=5.7
Area = 128.805
Volume = 111.919

The new location, radius ang height of cyl are
Center=(2,2)
Radius=4.25
Height=10
Area = 380.525
Volume = 567.45
*/
