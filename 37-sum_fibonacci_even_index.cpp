#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of terms: ";
    cin >> N;

    long long first = 0, second = 1, next, sum = 0;

    cout << "Fibonacci sequence up to " << N << " terms: ";
    for (int i = 0; i < N; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }

        cout << next << " ";

        if (i % 2 == 0) {
            sum += next;
        }
    }

    cout << "\nSum of Fibonacci numbers at even indexes = " << sum << endl;

    return 0;
}
