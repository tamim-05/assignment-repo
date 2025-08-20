#include <iostream>
using namespace std;

int main()
{int n,sum=0;

    cout << "enter the limit: " << endl;
    cin >> n;
    
    cout << "sum of natural numbers from 1 to set upper limit are: ";
    for(int i=1; i<=n; i++ ){
        sum +=i;
    };
    cout << sum;
   
    return 0;
}