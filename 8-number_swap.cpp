#include <iostream>
using namespace std;

int main()
{int a,b,c;

    cout << "enter your numbers: " << endl;
    cin >> a >> b;

    c=a;
    a=b;
    b=c;

    cout << a << b << endl;
    return 0;
}