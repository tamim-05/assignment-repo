#include <iostream>
using namespace std;

int main()
{int n, f;

    cout << "enter desired number: ";
    cin >> n ;
 
    f=1;
    for(int i=1; i<=n; i++ ){
        f *=i;
    };
    
    cout << "the factorial of the given number is: " << f << endl;
   
    return 0;
}