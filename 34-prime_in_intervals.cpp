#include <iostream>
using namespace std;

int main() {
    int num, low, high;

    cout << "Enter the lower and upper limits: ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    for(num = low; num <= high; num++) {
        if(num <= 1) continue;

        bool isPrime = true;

        for(int i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = false;
            }
        }

        if(isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
