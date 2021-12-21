//某商店经销一种货物。货物购进和卖出时以箱为单位，各箱的重量不一样，因此，商店需要记录目前库存的总重量。现在用C++模拟商店货物购进和卖出的情况。 
#include <iostream>
using namespace std;
class Goods{
public:
    Goods(int w){
        weight = w;
        total_weight += weight;
    }
    ~Goods(){
        total_weight -= weight;
    }
    int getWeight(){
        return weight;
    }
    static int getTotalWeight(){
        return total_weight;
    }
    Goods *next;
private:
    int weight;
    static int total_weight;
};
int Goods::total_weight = 0;
void purchase(Goods* &f, Goods* &r, int w){
    Goods *p = new Goods(w);
    p->next = NULL;
    if(f == NULL)
        f = r = p;
    else{
        r->next = p;
        r = r->next;
    }
}
void sale(Goods* &f, Goods* &r){
    if(f == NULL){
        cout<<"没有多余的货物了！"<<endl;
        return;
    }
    Goods *q = f;
    f = f->next;
    delete q;
    cout<<"货物已卖出！"<<endl;
}
int main(){
    Goods *front = NULL,*rear = NULL;
    int w,choice;
    do {
        cout<<"----------------"<<endl;
        cout<<"欢迎来到货物管理系统"<<endl;
        cout<<"1.购进一箱货物"<<endl;
        cout<<"2.卖出一箱货物"<<endl;
        cout<<"3.查询当前仓库货物总重量"<<endl;
        cout<<"0.退出系统"<<endl;
        cout<<"----------------"<<endl;
        cout<<"请选择你的操作："<<endl;
        cin>>choice;
        switch (choice) {
            case 1:
                cout<<"请输入要购入货物的重量："<<endl;
                cin>>w;
                purchase(front,rear,w);
                break;
            case 2:
                sale(front,rear);
                break;
            case 3:
                cout<<"当前仓库货物总重量为："<<Goods::getTotalWeight()<<endl;
                break;
            case 0:
                break;
        }
    } while (choice);
}
