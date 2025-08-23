#include <iostream>
#include <algorithm>
using namespace std;

int main()
{int a,b,lcm,gcd;

    cout << "enter your numbers: " << endl;
    cin >> a >> b;

    gcd = __gcd(a,b);
    lcm = (a*b)/gcd;

    cout << "LCM= " << lcm << endl;
    return 0;
} 