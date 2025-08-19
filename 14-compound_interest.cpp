#include <iostream>
#include <cmath>
using namespace std;

int main()
{double p,r,t,a,c;

    cout << "principal amount: " << endl;
    cin >> p;

    cout << "rate of interest: " << endl;
    cin >> r;

    cout << "time: " << endl;
    cin >> t;

    a= p* pow((1+r/100),t);
    c= a-p;

    cout << "the compound interest is: " << c << "৳" << endl;//taka sign is copied
    return 0;
}