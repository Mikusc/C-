//建立一个描述3维坐标的类 Tri_Coor，重载运算符 “+”、“++”、和 “=” ，实现简单的算术运算
#include <iostream>
using namespace std;
class TriCoor{
public:
    TriCoor(int x = 0, int y = 0, int z = 0){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    TriCoor operator+(TriCoor t){
        TriCoor temp;
        temp.x = x + t.x;
        temp.y = y + t.y;
        temp.z = z + t.z;
        return temp;
    }
    TriCoor operator=(TriCoor t){
        x = t.x;
        y = t.y;
        z = t.z;
        return *this;
    }
    TriCoor operator++(){
        x++;
        y++;
        z++;
        return *this;
    }
    void show(){
        cout<<x<<","<<y<<","<<z<<endl;
    }
    void assign(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
private:
    int x,y,z;
};
int main(){
    TriCoor a(1,2,3),b,c;
    a.show();b.show();c.show();
    for(int i = 0; i < 5; i++)
        ++b;
    b.show();
    c.assign(3,3,3);
    c = a + b + c;
    c.show();
    c = b = a;
    c.show();
}
