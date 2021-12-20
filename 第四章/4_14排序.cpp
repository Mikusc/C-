#include <iostream>
#define N 10
using namespace std;
void selectSort(int a[], int n);
void bubbleSort(int a[], int n);
int main(){
    int a[N],i;
    cout<<"请输入"<<N<<"个数："<<endl;
    for(i = 0; i < N; i++)
        cin>>a[i];
    for(i = 0; i < N; i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    selectSort(a,N);  //选择排序
    bubbleSort(a,N);  //冒泡排序
    for(i = 0; i < N; i++)
        cout<<a[i]<<"\t";
    cout<<endl;
}
void selectSort(int a[], int n){
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
void bubbleSort(int a[], int n){
    int pos = n - 1;
    int swap_pos;
    int swap_flag;
    int i,j,temp;
    for(i = 0; i < n - 1; i++){
        swap_flag = 0;
        for(j = 0; j < pos; j++){
            if(a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap_pos = j;
                swap_flag = 1;
            }
        }
        pos = swap_pos;
        if(swap_flag == 0)
            return;
    }
}
