#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, low, high, temp, originalnum, remainder;

    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are:" << endl;

    for (int num = low; num <= high; num++) {
        originalnum = num;
        n = 0;
        double result = 0.0;

        temp = num;
        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if ((int)result == originalnum)
            cout << originalnum << " ";
    }

    cout << endl;
    return 0;
}
