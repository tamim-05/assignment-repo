#include <iostream>
using namespace std;

int main()
{float r1,i1,r2,i2,rsum,isum;

    cout << "real and imaginary part of 1st comp number: " << endl;
    cin >> r1 >> i1;

    cout << "real and imaginary part of 2nd comp number: " << endl;
    cin >> r2 >> i2;

    rsum=r1+r2;
    isum=i1+i2;

    cout << "final sum: " << rsum << "+" << isum << "i" << endl;
    return 0;
}