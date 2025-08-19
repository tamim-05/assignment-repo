#include <iostream>
#include <cmath>
using namespace std;

int main()
{float l,b,a,p;

    cout << "length of rectangle: " << endl;
    cin >> l;

    cout << "breadth of rectangle: " << endl;
    cin >> b;

   a=l*b;
   p=2*(l+b);

    cout << "the area of rectangle is: " << a << endl;
    cout << "the perimeter of rectangle is: " << p << endl;
    return 0;
}