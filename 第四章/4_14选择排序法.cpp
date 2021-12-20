#include <iostream>
#define N 10
using namespace std;
void sort(int a[], int n);
int main(){
    int a[N],i;
    cout<<"请输入"<<N<<"个数："<<endl;
    for(i = 0; i < N; i++)
        cin>>a[i];
    for(i = 0; i < N; i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    sort(a,N);
    for(i = 0; i < N; i++)
        cout<<a[i]<<"\t";
    cout<<endl;
}
void sort(int a[], int n){
    int temp,t;
    for(int i = 0; i < n-1; i++) {
        t = i;
        for(int j = i + 1; j < n; j++)
            if(a[j] > a[t])
                t = j;
        if(t != i){
            temp = a[i];
            a[i] = a[t];
            a[t] = temp;
        }
    }
}
