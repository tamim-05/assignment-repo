#include <iostream>
#include <cmath>
using namespace std;

int main()
{int num, temp, originalnum, remainder, n=0;
    double result = 0.0;

    cout << "enter a number: " << endl;
    cin >> num;

    originalnum = num;

    temp=num;
    while (temp !=0){
        temp /= 10;
        ++n;
    }

    temp=num;
    while (temp!=0){
        remainder = temp % 10;
        result += pow(remainder,n);
        temp /= 10;
    }

    if((int)result == originalnum){
    cout << originalnum << " is an armstrong number." << endl;
    }
    else{
        cout << originalnum << " is not an armstrong number." << endl;
    }

    return 0;
} 