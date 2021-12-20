#include <iostream>
using namespace std ;
void sort_1(int a,int b,int c);
void sort_2(int a,int b,int c);
int main(){
    int a,b,c;
    cout<<"请输入三个整数："<<endl;
    cin>>a>>b>>c;
    sort_1(a,b,c);
    sort_2(a,b,c);
}

void sort_1(int a,int b,int c){
    int t;
    if (a > b){
        t = a; a = b; b = t;
    }
    if (a > c){
        t = a; a = c; c = t;
    }
    if (b > c){
        t = b; b = c; c = t;
    }
    cout<<"排序后的数是："<<a<<" "<<b<<" "<<c<<endl;
}

void sort_2(int a,int b,int c){
    if (a < b)
        if (b < c)
            cout<<"排序后的数是："<<a<<" "<<b<<" "<<c<<endl;
        else if (a < c)
            cout<<"排序后的数是："<<a<<" "<<c<<" "<<b<<endl;
        else
            cout<<"排序后的数是："<<c<<" "<<a<<" "<<b<<endl;
    else if (a < c)
        cout<<"排序后的数是："<<b<<" "<<a<<" "<<c<<endl;
    else if (b < c)
        cout<<"排序后的数是："<<b<<" "<<c<<" "<<a<<endl;
    else
        cout<<"排序后的数是："<<c<<" "<<b<<" "<<a<<endl;
}
