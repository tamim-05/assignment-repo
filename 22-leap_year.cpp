#include <iostream>
using namespace std;

int main()
{int n;

    cout << "Enter your year: " << endl;
    cin >> n;

    if((n%4==0 && n%100!=0)||(n%400==0)){
        cout << "this is a leap year." << endl;
    }
    else{
        cout << "it's not a leap year." << endl;
    }
    return 0;
}