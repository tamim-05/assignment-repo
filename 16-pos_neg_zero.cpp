#include <iostream>
using namespace std;

int main()
{float n;

    cout << "Enter your number: " << endl;
    cin >> n;

    if(n>0){
        cout << "given number is positive." << endl;
    }
    else if(n<0){
        cout << "given number is negative." << endl;
    }
    else{
        cout << "given number is zero." << endl;
    }
    return 0;
}