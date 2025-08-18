#include <iostream>
using namespace std;

int main()
{float f,c;

    cout << "enter temp in fahrenheit: " << endl;
    cin >> f;

    c=((f-32)*5)/9;

    cout << "temp in celsius is: " << c << endl;
    return 0;
}