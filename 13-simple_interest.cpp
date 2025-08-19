#include <iostream>
using namespace std;

int main()
{float p,r,t,s;

    cout << "principal amount: " << endl;
    cin >> p;

    cout << "rate of interest: " << endl;
    cin >> r;

    cout << "time: " << endl;
    cin >> t;

    s= (p*r*t)/100;

    cout << "the simple interest is: " << s << "৳" << endl;//taka sign is copied
    return 0;
}