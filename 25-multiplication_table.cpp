#include <iostream>
using namespace std;

int main()
{int n, m;

    cout << "enter your number: ";
    cin >> n ;
 
    m=1;
    for(int i=1; i<=10; i++ ){
        m = n*i;
     cout << n << 'x' << i << '=' << m << endl;   
    };
    
    
   
    return 0;
}