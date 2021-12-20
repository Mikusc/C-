#include <iostream>
using namespace std ;
int main()
{  int n, i, a0, a1 ;
    cout << "n = " ;
    cin >> n ;
    a0 = 0 ;  a1 = 1 ;
    cout << a0 << "  "<< a1 << "  ";
    for ( i = 2; i <= n/2 ; i ++ ){   
        a0 = a0 + a1 ;
        a1 = a1 + a0 ;
        cout << a0 << "  "<< a1 << "  ";
        if ( i % 5 == 0 )  cout << endl ;
    }
    if ( n > (i-1)*2 )  cout << a0+a1 << endl ;
}
