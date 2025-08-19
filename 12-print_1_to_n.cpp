#include <iostream>
using namespace std;

int main()
{int n;

    cout << "enter the limit: " << endl;
    cin >> n;
    
    cout << "numbers from 1 to set upper limit are: ";
    for(int i=1; i<=n; i++ ){
        cout << i << " ";
    };

   
    return 0;
}